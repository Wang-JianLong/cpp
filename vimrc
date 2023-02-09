
" line
set foldmethod=manual
set showtabline=2
set tabpagemax=18

set laststatus=2
"set termguicolors
" Vim 的默认寄存器和系统剪贴板共享
set clipboard+=unnamed

" encodeing
set encoding=utf-8
set fileencoding=utf-8

" editer
filetype on
set cindent
set number
set relativenumber
set tabstop=4
set shiftwidth=4
set softtabstop=4
set scrolloff=8
set sidescrolloff=8
set autoindent
set smartindent
set expandtab
set nowrap
set nobackup
set autoread
set noswapfile
set writebackup

" search
set smartcase
set ignorecase
set incsearch
set hlsearch

" auto
set wildmenu
set pumheight=10
au Insertleave *.go,*.cpp write

" window
set showmode
set splitbelow
set splitright

" highlight
syntax on
"set    cursorline
set     background=dark
"colorscheme desrt


" mappings
"let mapleader=' '
set timeoutlen=500

nmap <Space>w :w<CR>
nmap <Space>q :q<CR>
nmap H ^
nmap L $
nmap = <C-a>
nmap - <C-x>
nmap wd viwd
" window
nmap sc <C-w>c
nmap so <C-w>o
nmap ss :split<CR>
nmap sv :vsplit<CR>

nmap sh <C-w>h
nmap sj <C-w>j
nmap sk <C-w>k
nmap sl <C-w>l

nmap ;e :Vexplore<CR>
imap jj <esc>

nmap <Space>c  :call Complie()<CR>
nmap <Space>r  :call RunCode()<CR>


func! Complie()
  exec "w"
  exec "!g++ % -o wjl"
endfunc

func! RunCode()
  exec "w"
  exec "!g++ % -o wjl && wjl"
endfunc


" Tab Bgc
hi TabLineFill term=bold cterm=bold ctermbg=Black 
"hi TabLineSel term=bold cterm=bold ctermbg=DarkBlue
hi TabLineSel term=bold cterm=bold ctermbg=Black  ctermfg=Cyan

nmap fn :tabp<CR>
nmap fp :tabn<CR>

set statusline=%1*\%F%m%r%h%w%=
set statusline+=\ [%Y]
set statusline+=\ %{\"[\".(&fenc==\"\"?&enc:&fenc).((exists(\"+bomb\")\ &&\ &bomb)?\"+\":\"\").\"]\"}
set statusline+=\ [%{&ff}]
set statusline+=\ [asc=%03.3b]
set statusline+=\ [hex=%02.2B]
set statusline+=\ [pos=%04l,%04v]
set statusline+=[%p%%]
set statusline+=\ [len=%L]
" 颜色 https://www.ditig.com/256-colors-cheat-sheet
hi User1 ctermfg=Cyan ctermbg=Black

" no
hi LineNr term=bold cterm=NONE ctermfg=Cyan ctermbg=NONE gui=NONE  guibg=NONE



" 设置netrw-------------------------------------
let g:netrw_banner = 0         " 设置是否显示横幅
let g:netrw_liststyle = 3      " 设置目录列表样式：树形
let g:netrw_browse_split = 4   " 在之前的窗口编辑文件
let g:netrw_altv = 1           " 水平分割时，文件浏览器始终显示在左边
let g:netrw_winsize = 20       " 设置文件浏览器窗口宽度为25%
let g:netrw_list_hide= '^\..*' " 不显示隐藏文件 用 a 键就可以显示所有文件、 隐藏匹配 文件或只显示匹配文件
" 自动打开文件浏览器
" augroup ProjectDrawer
"     autocmd!
"     autocmd VimEnter * :Vexplore
" augroup END

nnoremap <A-m> :Lexplore<CR>    " 打开或关闭目录树

