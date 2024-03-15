<script lang="ts">
    import ButtonAwait from "../components/ButtonAwait.svelte";

	let connected: boolean = false;

	let isConnectionLoading: boolean = $state(false);
    let isConnectionFailed: boolean = $state(false);
    let isConnectionSuccess: boolean = $state(false);

</script>

<div class="flex bg-lgrey-400 gap-2 px-3 items-center h-full">
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