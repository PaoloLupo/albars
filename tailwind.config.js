import module from "vite";

/** @type {import('tailwindcss').Config} */
export default {
    content: [
      "./index.html",
      "./src/**/*.{svelte,js,ts}",
    ],
    theme: {
        container: {
            center: true,
            padding: '2rem',
            screens: {
                '2xl': '1440px'
            }
        },
        borderRadius: {
            'none': '0',
            DEFAULT: '5px',
            '10px' : '10px'

        },
        colors: {
            transparent: 'transparent',
            current: 'currentColor',
            blue: {
                100: '#E4F2FE',
                200: '#BEDFFE',
                300: '#95CCFF',
                400: '#6CB7FD',
                500: '#50A7FD',
                600: '#3B99FC',
                700: '#167EEF',
                800: '#0F66DE', //principal
                900: '#0E57CA',
                950: '#0C45A5',
            },
            lgrey: {
                100: '#FFFFFF',
                200: '#FAFAFB',
                300: '#F5F5F5', //principal navbar
                400: '#EEEEEE',
                500: '#E8E8E8',
                600: '#DADADB',
                700: '#CCCDCE',
                800: '#BEBFC0',
                900: '#B0B2B3',
                950: '#A2A4A6',
            },
            dgrey: {
                100: '#949699',
                200: '#86898C',
                300: '#787B7F',
                400: '#6A6D71',
                500: '#5C6064',
                600: '#343638',
                700: '#2D2F31',
                800: '#27282A',
                900: '#222425',
                950: '#1D1F20',
            },
            slate: {
                100: '#F6F8FE',
                200: '#EFF2FE',
                300: '#E6E9FC',
                400: '#D6D9EC',
                500: '#B3B6C8',
                600: '#9496A8',
                700: '#6B6E7F',
                800: '#585A6C',
                900: '#393C4B',
                950: '#191B29',
            },
            red: {
                100: '#FFEBEE',
                200: '#FFCDD2',
                300: '#EF9A9A',
                400: '#E57373',
                500: '#EF5350',
                600: '#F44336', //principal
                700: '#E53935',
                800: '#D32F2F',
                900: '#C62828',
                950: '#B71C1C',
            },
            orange: {
                100: '#FFEFE0',
                200: '#FFD4B2',
                300: '#FFBB80',
                400: '#FFA44D',
                500: '#FF9326',
                600: '#FF8500',
                700: '#FB7B00',
                800: '#F56A00',
                900: '#EF5300',
                950: '#E64600',
            }
        }

    }
}
