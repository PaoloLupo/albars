<script lang="ts">
	export let data = ''
	export let viewBox = extractViewBox(data)

	export let size = '20px'
	export let width = size
	export let height = size

	export let color = 'white'
	export let stroke = color
    export let strokewidth = '2'
	export let fill = 'none'

	$: elements = data
		.replace(/<svg[ \n]([^>]*)>/, '')
		.replace('</svg>', '')

	function extractViewBox(svg: string) {
		const regex = /viewBox="([\d\- \.]+)"/
		const res = regex.exec(svg)
		if (!res) return '0 0 20 20' // default value
		return res[1]
	}
</script>

<svg
        xmlns="http://www.w3.org/2000/svg"
        stroke-width={strokewidth}
        {width}
        {height}
        {viewBox}
        {stroke}
        {fill}
        {...$$restProps}
>
    {@html elements}
</svg>