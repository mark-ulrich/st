/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#101010", /* black   */
    [1] = "#e84f4f", /* red     */
    [2] = "#b8d68c", /* green   */
    [3] = "#e1aa5d", /* yellow  */
    [4] = "#7dc1cf", /* blue    */
    [5] = "#9b64fb", /* magenta */
    [6] = "#6d878d", /* cyan    */
    [7] = "#dddddd", /* white   */

    /* 8 bright colors */
    [8] = "#404040",  /* black   */
    [9] = "#d23d3d",  /* red     */
    [10] = "#a0cf5d", /* green   */
    [11] = "#f39d21", /* yellow  */
    [12] = "#4e9fb1", /* blue    */
    [13] = "#8542ff", /* magenta */
    [14] = "#42717b", /* cyan    */
    [15] = "#dddddd", /* white   */

    /* special colors */
    [256] = "#000000", /* background */
    [257] = "#ffffff", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
