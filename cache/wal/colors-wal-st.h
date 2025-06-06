const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0404", /* black   */
  [1] = "#94778D", /* red     */
  [2] = "#7185B9", /* green   */
  [3] = "#5785D1", /* yellow  */
  [4] = "#6E8EC9", /* blue    */
  [5] = "#A4A3A2", /* magenta */
  [6] = "#EDD8B8", /* cyan    */
  [7] = "#c2c0c0", /* white   */

  /* 8 bright colors */
  [8]  = "#665454",  /* black   */
  [9]  = "#94778D",  /* red     */
  [10] = "#7185B9", /* green   */
  [11] = "#5785D1", /* yellow  */
  [12] = "#6E8EC9", /* blue    */
  [13] = "#A4A3A2", /* magenta */
  [14] = "#EDD8B8", /* cyan    */
  [15] = "#c2c0c0", /* white   */

  /* special colors */
  [256] = "#0b0404", /* background */
  [257] = "#c2c0c0", /* foreground */
  [258] = "#c2c0c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
