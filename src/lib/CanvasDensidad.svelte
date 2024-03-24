<script lang="ts">
    import {Stage, Layer, Rect, Text, Circle, Line} from 'svelte-konva';
    import ResponsiveStage from '../components/ResponsiveStage.svelte';
    import Konva from 'konva';

    let stage: Konva.Stage;
    let container: HTMLDivElement;

    let width:number;
    let height:number;

    var shadow


</script>

<ResponsiveStage bind:handle={stage} bind:container bind:width bind:height>
    <Layer>
        <Rect
            config={{
                x: 20,
                y: 50,
                width: 100,
                height: 100,
                fill: "red",
                shadowBlur: 10,
            }}
        />


    </Layer>
</ResponsiveStage>