# bars/bars.h
CBars is a small c99 library for progress bars in the terminal.

# Example
```c
char percent[10] = {0};
cbar_t bar = cbar(64, '[', ']', '-', ' ', "Loading Level: ", percent);

cbar_hide_cursor();
while(loading()){
    bar.progress = load();
    sprintf(percent, "%u%c", (uint32_t)floor(bar.progress*100.0), '%');

    cbar_display_bar(&bar);
}
cbar_show_cursor();
```

# Result (at 63%)
```
Loading Level: [---------------------------------------                       ] 63%
```

# Missing features that I might implement when I feel like it
> Background colors <br>
> Text effects (Bold, Italic, etc)

## Forked from https://github.com/NongusStudios/cbars
