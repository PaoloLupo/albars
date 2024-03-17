<script lang="ts">
    import Konva from "konva";
    import {Stage} from "svelte-konva";



    let {
        handle,
        container,
        width,
        height,

    }:any = $props();


    const STAGE_BASE_WIDTH = 500;

    let config = {
        width: STAGE_BASE_WIDTH,
        height: 500,
        scaleX: 1,
        scaleY: 1,
    };

    function updateStageSize() {
        if (!container) {
            return;
            }
            width = container.offsetWidth-2;
            height = container.offsetHeight-2;
            config.width = width;
            config.height = height;
            let scale = config.width / STAGE_BASE_WIDTH;
            config.scaleX = scale;
            config.scaleY = scale;
    }

    $effect(() => {
        window.addEventListener("resize", updateStageSize);
        updateStageSize();
	});

</script>

<div bind:this={container} class="h-full w-full">
    <Stage 
        {config}
        style="border: 1px solid black;"
        bind:handle
        on:pointerdblclick
        on:pointerdown
        on:pointerup
        on:pointermove
        on:mouseout
    >
        <slot />
    </Stage>

</div>