<script lang="ts">

	import { Popover, Tabs, Combobox, Checkbox } from "bits-ui";
    import {flyAndScale} from "../utils/transitions";

    import {invoke} from "@tauri-apps/api/tauri";
	import Icon from "./Icon.svelte";
	import settings from "$icons/settings.svg?raw";
	import caretdown from "$icons/caretdown.svg?raw";
	import check from "$icons/check.svg?raw";


    let versionesCompatibles:Object[] = [];

    async function check_versiones_instaladas(){

        // Function implementation goes here
        let versionesCompatibles: Object[] = []
        let response: Array<String> = await invoke("get_etabs_instances_command");
        for (let i = 0; i < response.length; i++) {
            versionesCompatibles.push({value: response[i], label: response[i]});
        }
        return versionesCompatibles
    }

    check_versiones_instaladas().then((response) => {
        versionesCompatibles = response;
    });
    let versionSelected = $state("");

	let attachToInstance = $state(true);

	$effect(() => {
		versionSelected = versionSelected

        console.log(versionSelected);
    });

</script>
<Popover.Root >
    <Popover.Trigger class="button_primary ">
        <Icon data={settings}  class="h-6 w-6 white pt-0.5 pb-0.5"/>
    </Popover.Trigger>
    <Popover.Content
            class="settings-popover max-w-[600px] max-h-[300px]"
            transition = {flyAndScale}
        sideOffset = {10}
    >
        <div class=" items-top h-full ">
            <Tabs.Root
                    value="api"
                    class = "grid grid-cols-3 h-full w-full gap-0.5"

            >
                <Tabs.List
                        class="flex flex-col text-sm gap-1 m-3"
                        data-orientation='vertical'
                >
                    <Tabs.Trigger
                            value="api"
                            class="tab-trigger"
                    >Conexión</Tabs.Trigger>
                    <Tabs.Trigger
                            value="Settings"
                            class="tab-trigger"
                    >Materiales</Tabs.Trigger>
                    <Tabs.Trigger
                            value="Parametros"
                            class="tab-trigger"
                    >Materiales</Tabs.Trigger>
                </Tabs.List>

                <Tabs.Content value="api" class="px-6 pt-3 col-span-2 bg-lgrey-100  rounded-r-dialogs">
                    <div class="flex flex-col gap-3">

                        <h4 class="text-sm font-semibold">
                            Instancia de ETABS®
                        </h4>
                        <div class="peer flex items-center justify-end gap-3 relative">
                            <p>Versión:</p>

                            <Combobox.Root items={versionesCompatibles} bind:versionSelected onSelectedChange={()=>console.log("hola")} >
                                    <Combobox.Input
                                            class="combobox w-[200px] "
                                            placeholder="Seleccionar"
                                    >
                                    </Combobox.Input>
                                    <Icon data={caretdown}  class="absolute h-5 w-5 pt-0.5 pb-0.5 pr-2 stroke-black pointer-events-none" />
                                <Combobox.Content
                                        class="combobox-content "
                                        transition={flyAndScale}
                                        sideOffset={8}
                                >
                                    {#each versionesCompatibles as version (version.value)}
                                        <Combobox.Item
                                                class="group flex h-5  select-none items-center text-sm rounded-primary
                                                outline-none transition-all duration-75 rounded-button m-1 pl-2 data-[highlighted]:bg-blue-primary data-[highlighted]:text-white"
                                                value={version.value}
                                                label={version.label}
                                        >
                                            {version.label}
                                            <Combobox.ItemIndicator class="ml-auto" asChild={false}>
                                                <Icon data={check} color="black" class="h-5 w-5 pt-0.5 pb-0.5 pr-2 group-data-[highlighted]:stroke-white" />
                                            </Combobox.ItemIndicator>
                                        </Combobox.Item>
                                    {/each}
                                </Combobox.Content>

                            </Combobox.Root>





                        </div>

                        <div  class="flex items-center justify-end gap-3">
                            <p>Tipo de Conexión:</p>

                            <Checkbox.Root
                                    id="connectionKind"
                                    class="checkbox-root"
                                    checked={attachToInstance}
                                    onCheckedChange="{() => attachToInstance=!attachToInstance}"
                            >
                                <Checkbox.Indicator
                                        class="checkbox-indicator"
                                >
                                    {#if attachToInstance}
                                        <Icon data={check} color="white" class="h-5 w-5 pt-0.5 pb-0.5" />
                                    {/if}
                                </Checkbox.Indicator>
                            </Checkbox.Root>
                            <p>Conectar a instancia abierta</p>
                        </div>

                        <div class="flex justify-end gap-3">
                            <button disabled={versionSelected.length===0} class="button_primary">Conectar</button>
                        </div>


                </Tabs.Content>
            </Tabs.Root>


        </div>
    </Popover.Content>

</Popover.Root>
