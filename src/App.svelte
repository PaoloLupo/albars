<script lang="ts">
    import MenuBar from "./lib/MenuBar.svelte";
    import Footer from "./lib/Footer.svelte";
    import Greet from "./lib/Greet.svelte";
</script>

<header class="[grid-area:header] p-1 ">
    <MenuBar />
</header>
<aside class="[grid-area:aside]">

</aside>
<main class="[grid-area:main] bg-orange-400">
    <Greet  />
</main>

<footer class="[grid-area:footer]">
    <Footer />
</footer>

