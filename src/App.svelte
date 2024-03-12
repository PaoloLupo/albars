<script lang="ts">
  import Greet from './lib/Greet.svelte'
  import { createCollapsible } from "@melt-ui/svelte";

  const {
    elements: { root, content, trigger },
    states: { open },
  } = createCollapsible({
    forceVisible: true,
  });

</script>

<main class="container">

  <button
          use:melt={$trigger}
          class="relative h-6 w-6 place-items-center rounded-md bg-white text-sm
        text-magnum-800 shadow hover:opacity-75 data-[disabled]:cursor-not-allowed
        data-[disabled]:opacity-75"
          aria-label="Toggle"
  >
  <div class="p-8">

  </div>

  <div class="row">
    <Greet />
  </div>


</main>