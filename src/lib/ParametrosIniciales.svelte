<script lang="ts">
    import {LayerCake, Svg} from "layercake";
	import {Separator} from "bits-ui";
	import Scatter from "../components/Scatter.svelte";
	const points = [
		{x: 0, y: 0},
		{x: 5, y: 10},
		{x: 10, y: 20},
		{x: 15, y: 30},
		{x: 20, y: 40}
	];

</script>

<div class="grid grid-cols-4 h-full">

    <div class="chart-container col-span-3">
        <LayerCake
                data={ points }
                x='x'
                y='y'
        >
            <Svg>
                <!-- You can expose properties on your chart components to make them more reusable -->
                <Scatter fill={'blue'} r={3} />
            </Svg>
        </LayerCake>
    </div>
    <div class="flex flex-col bg-lgrey-300 p-1 gap-2">
        <div class="flex flex-row gap-1 justify-center h-8 place-items-center">
            <button class="button_menubar">asd</button>
            <Separator.Root orientation="vertical" class="bg-lgrey-500 h-4 w-0.5"/>
            <button class="button_menubar">asd</button>
            <Separator.Root orientation="vertical" class="bg-lgrey-500 h-4 w-0.5"/>
            <button class="button_menubar">asd</button>
            <Separator.Root orientation="vertical" class="bg-lgrey-500 h-4 w-0.5"/>
            <button class="button_menubar">asd</button>
        </div>
        <Separator.Root orientation="horizontal" class="bg-lgrey-500 h-0.5 w-full"/>
        <div class="p-3">

        </div>

    </div>
</div>

<style>
    /*
      The wrapper div needs to have an explicit width and height in CSS.
      It can also be a flexbox child or CSS grid element.
      The point being it needs dimensions since the <LayerCake> element will
      expand to fill it.
    */
    .chart-container {
        width: 100%;
        height: 300px;
    }
</style>