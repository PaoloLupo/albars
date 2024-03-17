<script lang="ts">
    import { Menubar } from "bits-ui";
	import {flyAndScale} from "../utils/transitions";
	import Icon from "../components/Icon.svelte";
	import list from "$icons/list.svg?raw";
	import ParametrosIniciales from "./ParametrosIniciales.svelte";
	import CanvasDensidad from "./CanvasDensidad.svelte";

	let { selectedIndexComponent } = $props();

	let indexSelected = $state(0);


	$effect(() => {
        selectedIndexComponent = indexSelected;
		console.log(selectedIndexComponent)
    });


</script>

    <div class="flex flex-row h-full bg-lgrey-300">
        <div class="basis-1/3">
        </div>
        <div class="flex basis-1/3 place-items-center justify-center">
            <button class="button_menubar" onclick={()=> indexSelected = 0}>
                <Icon data="{list}" stroke="black" size="30px" />
                Parámetros
            </button>
            <button class="button_menubar" onclick={()=> indexSelected = 1}>
                <Icon data="{list}" stroke="black" size="30px" />
                Parámetros
            </button>
        </div>
        <div class="basis-1/3">
        </div>
    </div>
