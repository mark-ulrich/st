/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#1e1e1e", /* black   */
    [1] = "#cf6a4c", /* red     */
    [2] = "#8f9d6a", /* green   */
    [3] = "#f9ee98", /* yellow  */
    [4] = "#7587a6", /* blue    */
    [5] = "#9b859d", /* magenta */
    [6] = "#afc4db", /* cyan    */
    [7] = "#a7a7a7", /* white   */

    /* 8 bright colors */
    [8] = "#5f5a60",  /* black   */
    [9] = "#cf6a4c",  /* red     */
    [10] = "#8f9d6a", /* green   */
    [11] = "#f9ee98", /* yellow  */
    [12] = "#7587a6", /* blue    */
    [13] = "#9b859d", /* magenta */
    [14] = "#afc4db", /* cyan    */
    [15] = "#ffffff", /* white   */

    /* special colors */
    [256] = "#1e1e1e", /* background */
    [257] = "#a7a7a7", /* foreground */
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
