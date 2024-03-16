<script lang="ts">
    import MenuBar from "./lib/MenuBar.svelte";
    import Footer from "./lib/Footer.svelte";
    import CanvasDensidad from "./lib/CanvasDensidad.svelte";
</script>

<header class="[grid-area:header] p-1 ">
    <MenuBar />
</header>
<aside class="[grid-area:aside]">

</aside>
<main class="[grid-area:main]">
    <CanvasDensidad />

</main>

<footer class="[grid-area:footer]">
    <Footer />
</footer>

