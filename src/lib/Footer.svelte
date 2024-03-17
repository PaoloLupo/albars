<script lang="ts">
    import { Popover, Tabs, Combobox, Separator } from "bits-ui";
    import ButtonAwait from "../components/ButtonAwait.svelte";
	import ConfigMenuPopover from "../components/ConfigMenuPopover.svelte";


	let connected: boolean = false;

	let isConnectionLoading: boolean = $state(false);
	let isConnectionFailed: boolean = $state(false);
	let isConnectionSuccess: boolean = $state(false);
</script>

<div class="flex h-full items-center gap-2 px-3 bg-lgrey-300">
    <ConfigMenuPopover/>



    <ButtonAwait 
        on:click = {() => {
            isConnectionLoading = true;
            setTimeout(() => {
                connected = !connected;
                isConnectionLoading = false;
                connected ? isConnectionSuccess = true : isConnectionFailed = true;
            }, 2000);}}
        loading={isConnectionLoading}
        success={isConnectionSuccess}
        failed={isConnectionFailed}
    >

    </ButtonAwait>
</div>