<script lang="ts">
    import { Menubar } from "bits-ui";
	import {flyAndScale} from "../utils/transitions";
</script>

<Menubar.Root class="flex h-12 items-center gap-1 bg-lgrey-400 rounded">
    <div class="px-2.5 font-bold text-2xl">
      Alba

    </div>
    <Menubar.Menu>
        <Menubar.Trigger class="menubar-buttons">
            View
            <Menubar.Content
                    class="z-50 w-full max-w-[220px] rounded-10px border border-lgrey-900 bg-lgrey-400 "
                    transition={flyAndScale}
                    align="start"
                    sideOffset={10}
            >
                asda
            </Menubar.Content>

        </Menubar.Trigger>

    </Menubar.Menu>


</Menubar.Root>
