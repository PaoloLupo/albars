<script >
    import MenuBar from "./lib/MenuBar.svelte";
    import Footer from "./lib/Footer.svelte";
    import CanvasDensidad from "./lib/CanvasDensidad.svelte";
	import ParametrosIniciales from "./lib/ParametrosIniciales.svelte";

	let selectedComponent= $state(0);
    const MainComponents = [
        {value: 'Parametros', component: ParametrosIniciales},
        {value: 'Densidad', component: CanvasDensidad},
    ]

</script>

<header class="[grid-area:header] ">
    <MenuBar bind:selectedIndexComponent={selectedComponent}/>
</header>

<main class="[grid-area:main]">
    <svelte:component this={MainComponents[selectedComponent].component}/>
</main>

<footer class="[grid-area:footer]">
    <Footer />
</footer>

