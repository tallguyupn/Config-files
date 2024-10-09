# Tricks

<p>You can add the code below to give the theme some little extra feature. <b>You should add the code into the <code>chrome/components/ogx_tricks.css</code> file, if not exist be free to create it.</b></p>

## Non Image in the left-sidebar in themes that use images
<details><summary>Code Here</summary>
    
```
/* Non Image in the left-sidebar in themes that use images */

:root:not([chromehidden~="toolbar"]):is([lwtheme-image]) #PersonalToolbar, 
:root:not([chromehidden~="toolbar"]):is([style*="--lwt-additional-images"]) #PersonalToolbar {
    background-image: none !important;
}
```

</details>

![NonImageInLeftSidebar](https://user-images.githubusercontent.com/22057609/228630330-a32dbd11-6800-4cb2-a402-4793cdfe805c.png)

## Image in menus (contextual menu and arrowpanel menus)

<p><b>Warning: </b>For solid themes the image will be <code>chrome/newtab/menu-image.png</code>, If you use a theme with images and any extension to change some color, you should use too '<a href="https://github.com/Godiesc/firefox-gx/tree/main/Extras/Main-Image">Main-image</a>' config. Themes that use an animated image will cause a high cpu use.</p>
<details><summary>Code Here</summary>
    
```
/* Image in menus */
  
    :root:not([style*="--lwt-additional-images"],[lwtheme-image]) :is(popupset, panelview, menupopup),
    :root:not([style*="--lwt-additional-images"],[lwtheme-image]):is([sizemode="maximized"]) #PanelUI-menu-button{
        --lwt-header-image: url("../newtab/menu-image.png") !important;
        --lwt-additional-images: var(--lwt-header-image) !important;
    }

    @media (prefers-color-scheme: dark){
        :root:is([style*="--lwt-additional-images"],[lwtheme-image]),
        :root:not([style*="--lwt-additional-images"],[lwtheme-image]){
            --arrowpanel-background: #101019d0 !important;
    }}

    @media (prefers-color-scheme: light){
        :root:is([style*="--lwt-additional-images"],[lwtheme-image]),
        :root:not([style*="--lwt-additional-images"],[lwtheme-image]){
            --arrowpanel-background: #f9f9f9d0 !important;
    }}

    .menupopup-arrowscrollbox, popupset, panelview, popupnotification, slot,
    :root:not([chromehidden~="toolbar"]):is([sizemode="maximized"]) #PanelUI-menu-button[open]>.toolbarbutton-badge-stack,
    :root:not([chromehidden~="toolbar"]):is([sizemode="maximized"]) #PanelUI-menu-button[open]>stack::after{
        background-image: linear-gradient(var(--arrowpanel-background, transparent), var(--arrowpanel-background, transparent)), 
                          var(--lwt-additional-images,none), var(--lwt-header-image, none) !important;
        background-position: -1px -1px !important;
        background-repeat: repeat !important;
        background-size: auto 100vh !important;
        background-attachment: initial !important;
    }

    @media (-moz-platform: windows), (-moz-platform: linux) {
        :root:not([chromehidden~="toolbar"]):is([sizemode="maximized"]) #PanelUI-menu-button[open]>stack::after{
            background-color: var(--arrowpanel-background) !important;
            background-position: -23px -1px !important;
        }}

    @media (-moz-bool-pref:"firefoxgx.main-image") {
         @media (prefers-color-scheme: dark){
            :root:not([style*="--lwt-additional-images"],[lwtheme-image]) :is(popupset, panelview, menupopup),
            :root:not([style*="--lwt-additional-images"],[lwtheme-image]):is([sizemode="maximized"]) #PanelUI-menu-button{
                --lwt-header-image: url("../newtab/main-image-dark.png") !important;
                --lwt-additional-images: var(--lwt-header-image) !important;
             }}

        @media (prefers-color-scheme: light){
            :is(popupset, panelview, menupopup),
            :root:not([style*="--lwt-additional-images"],[lwtheme-image]):is([sizemode="maximized"]) #PanelUI-menu-button{
                --lwt-header-image: url("../newtab/main-image-light.png") !important;
                --lwt-additional-images: var(--lwt-header-image) !important;
             }}
        }
```
</details>

![ImageInMenus](https://user-images.githubusercontent.com/22057609/228356808-02b9cb92-ba4b-4769-a870-8b41b638c18f.png)

## Extensions button into the "left-sidebar" - Immovable
<details><summary>Code Here</summary>
    
```
/* Extensions button into the "left-sidebar" - Immovable */

:root:not([chromehidden~="toolbar"],[sizemode="fullscreen"]) #PersonalToolbar {
    --padding-top-left-sidebar: 146px !important;
}

@media (-moz-bool-pref:"firefoxgx.oneline") {
    :root:not([chromehidden~="toolbar"],[sizemode="fullscreen"]) #PersonalToolbar {
    --padding-top-left-sidebar: 182px !important;
}}

:root:not([chromehidden~="toolbar"], [sizemode="fullscreen"]) #unified-extensions-button {
    --toolbarbutton-hover-background: transparent !important;
    --toolbarbutton-active-background: transparent !important;
    position: fixed;
    display: flex;
    top: 76px !important;
    left: inherit !important;
    z-index: 2 !important;
    fill: var(--general-color) !important;
    width: calc(var(--uc-vertical-toolbar-width) - 4px) !important;
}

:root:not([chromehidden~="toolbar"], [sizemode="fullscreen"]) #unified-extensions-button:hover, 
:root:not([chromehidden~="toolbar"], [sizemode="fullscreen"]) #unified-extensions-button[open] {
    transform: scale(1.12) !important;
    transition: ease-in-out !important;
}

:root:not([chromehidden~="toolbar"], [sizemode="fullscreen"]) #unified-extensions-button:active {
    transform: scale(1.0) !important;
    transition-duration: 0ms !important;
}
```
</details>

![ExtensionButtonLeftSidebar](https://user-images.githubusercontent.com/22057609/232178144-499c9c9b-995d-4e9d-9f2b-1356aa34fd84.png)
