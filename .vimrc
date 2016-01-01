" vim settings
set nocompatible              " be iMproved, required
set showmode
set mouse=a
set noerrorbells
set number
set ruler
"" search
set ignorecase smartcase
set nowrapscan
set incsearch   " increment search
set nohlsearch  " no highlight search
"" match
set showmatch
set matchtime=2
"" about regexp
set magic
"" indent
set smartindent
set cindent " c language indent
set ai  " auto indent
"" tab backspace etc.
set tabstop=4
set softtabstop=4
set shiftwidth=4
set backspace+=indent,eol,start " enable backspace to delete indent, eol and start
"" auto fold
set nofoldenable
set foldmethod=syntax
nnoremap <space> @=((foldclosed(line('.')) < 0) ? 'zc' : 'zo')<CR>
"" language and coding
set langmenu=zh_CN.UTF-8    " menu language
set helplang=cn     " help doc language
set encoding=utf-8
set fileencodings=utf-8,gb18030,utf-16,big5     " guess the file coding method when opening a file.

"" make
" :make to run make makefile (commandline)
" :make -f filename to run make -f filename (commandline)

"" quickfix

"" vimgrep

"" mapping
nmap <silent> <leader>ev :e $MYVIMRC<CR>    " open .vimrc
map <C-A> ggVGY
map! <C-A> <ESC>ggVGY
vmap <C-c> +y
" use :[N]b to choose buffer N
" use :bd to close a buffer
nnoremap [b :bp<CR>
nnoremap ]b :bn<CR>
" use :[N]gt to choose tab N
nnoremap [t :tabp<CR>
nnoremap ]t :tabn<CR>


" Vundle
set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'

" Plugins
Plugin 'scrooloose/syntastic'
Plugin 'bling/vim-airline'
"Plugin 'SirVer/ultisnips'
Plugin 'scrooloose/nerdcommenter'
Plugin 'scrooloose/nerdtree'
Plugin 'younghz/Markdown'
Plugin 'majutsushi/tagbar'
Plugin 'tpope/vim-fugitive'
Plugin 'tpope/vim-sleuth'
Plugin 'vim-scripts/a.vim'
Plugin 'tyru/open-browser.vim'
Plugin 'Valloric/YouCompleteMe'
Plugin 'mhinz/vim-signify'
Plugin 'vim-scripts/Conque-GDB'
" Color schemes
Plugin 'flazz/vim-colorschemes'

" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this lineet nu



" YouCompleteMe
" <leader>jd to jump to definition or declaration
set completeopt=longest,menu	"让Vim的补全菜单行为与一般IDE一致(参考VimTip1228)
autocmd InsertLeave * if pumvisible() == 0|pclose|endif	"离开插入模式后自动关闭预览窗口
inoremap <expr> <CR>       pumvisible() ? "\<C-y>" : "\<CR>"	"回车即选中当前项
"inoremap <expr> <Down>     pumvisible() ? "\<C-n>" : "\<Down>"
"inoremap <expr> <Up>       pumvisible() ? "\<C-p>" : "\<Up>"
"inoremap <expr> <PageDown> pumvisible() ? "\<PageDown>\<C-p>\<C-n>" : "\<PageDown>"
"inoremap <expr> <PageUp>   pumvisible() ? "\<PageUp>\<C-p>\<C-n>" : "\<PageUp>"
nnoremap <leader>jd :YcmCompleter GoToDefinitionElseDeclaration<CR>
inoremap <leader><leader> <C-x><C-o>
let g:ycm_global_ycm_extra_conf = '~/.vim/bundle/YouCompleteMe/third_party/ycmd/cpp/ycm/.ycm_extra_conf.py'
let g:ycm_confirm_extra_conf=0
let g:ycm_collect_identifiers_from_tags_files=1
let g:ycm_collect_identifiers_from_comments_and_strings = 1
let g:ycm_min_num_of_chars_for_completion=2
let g:ycm_cache_omnifunc=0
let g:ycm_seed_identifiers_with_syntax=1
let g:ycm_complete_in_comments = 1
let g:ycm_complete_in_strings = 1
let g:ycm_filetype_blacklist = {'tagbar' : 1, 'nerdtree' : 1,}
"let g:ycm_key_list_select_completion = ['<Down>']
let g:ycm_key_list_select_completion = ['<TAB>', '<Down>']
"let g:ycm_key_list_previous_completion = ['<Up>']
let g:ycm_key_list_previous_completion = ['<S-TAB>', '<Up>']
let g:ycm_key_invoke_completion = '<C-Space>'

" UltiSnips
"let g:UltiSnipsExpandTrigger="<tab>"
"let g:UltiSnipsJumpForwardTrigger="<tab>"
"let g:UltiSnipsJumpBackwardTrigger="<S-tab>"
"let g:UltiSnipsListSnippets="<c-e>"
"let g:UltiSnipsSnippetDirectories=["bundle/ultisnips"]
" 参考https://github.com/Valloric/YouCompleteMe/issues/36#issuecomment-62941322
" 解决ultisnips和ycm tab冲突，如果不使用下面的办法解决可以参考
" https://github.com/Valloric/YouCompleteMe/issues/36#issuecomment-63205056 的配置
" begin
" let g:ycm_key_list_select_completion=['<C-n>', '<Down>']
" let g:ycm_key_list_previous_completion=['<C-p>', '<Up>']
" let g:UltiSnipsExpandTrigger="<Tab>"
" let g:UltiSnipsJumpBackwardTrigger="<S-Tab>"
" end
" UltiSnips completion function that tries to expand a snippet. If there's no
" snippet for expanding, it checks for completion window and if it's
" shown, selects first element. If there's no completion window it tries to
" jump to next placeholder. If there's no placeholder it just returns TAB key

"function! g:UltiSnips_Complete()
"	call UltiSnips#ExpandSnippet()
"	if g:ulti_expand_res == 0
"		if pumvisible()
"			return "\<C-n>"
"		else
"			call UltiSnips#JumpForwards()
"			if g:ulti_jump_forwards_res == 0
"				return "\<TAB>"
"			endif
"		endif
"	endif
"	return ""
"endfunction

"au BufEnter * exec "inoremap <silent> " . g:UltiSnipsExpandTrigger . " <C-R>=g:UltiSnips_Complete()<cr>"
" Expand snippet or return
"let g:ulti_expand_res = 1
"function! Ulti_ExpandOrEnter()
"	call UltiSnips#ExpandSnippet()
"	if g:ulti_expand_res
"		return ''
"	else
"		return "\<return>"
"endfunction
" Set <space> as primary trigger
"inoremap <return> <C-R>=Ulti_ExpandOrEnter()<CR>



" Ctags
" <C-F12> to generate tag file under this dir.
" $ vim -t tag, open the file where tag is defined, and locate the position
" :ts, :tp, :tn
" <C+]> jump to the location where tag is defiend
" <C+t> jump back
map <C-F12> :!ctags -R --c++-kinds=+px --fields=+iaS --extra=+q .<CR>



"" syntastic
" <leader>sn to show next error
" <leader>sp to show previous error
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*
let syntastic_enable_highlighting = 0
let g:syntastic_check_on_wq = 1
" cpp checker
let g:syntastic_cpp_include_dirs = ['/usr/include/']
let g:syntastic_cpp_remove_include_errors = 1
let g:syntastic_cpp_check_header = 1
let g:syntastic_cpp_compiler = 'clang++'
let g:syntastic_cpp_compiler_options = ' -std=c++11 -stdlib=libstdc++'
" set error or warning signs
let g:syntastic_enable_signs = 0
let g:syntastic_error_symbol = '✗'
let g:syntastic_warning_symbol = '⚠'
" whether to show balloons
let g:syntastic_enable_balloons = 0
" to see error location list
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_loc_list_height = 4
function! ToggleErrors()
  let old_last_winnr = winnr('$')
  lclose
  if old_last_winnr == winnr('$')
    lopen
  endif
endfunction
nnoremap <S-F6> :call ToggleErrors()<CR>  " show error window
nnoremap <leader>ff : YcmCompleter FixIt<CR> " FixIt
nnoremap <leader>nn :lnext<CR>  " next error location
nnoremap <leader>pp :lprevious<CR>  " previous error location



"" airline
set t_Co=256
set laststatus=2
" download pre-pathed fonts in https://github.com/powerline/fonts, unzip and
" install, then config the terminal profile preference font to powerline font
" such as Inconsolata for Powerline Medium.
let g:airline_powerline_fonts = 1
if !exists('g:airline_symbols')
  let g:airline_symbols = {}
endif  

let g:airline_left_sep = ''
let g:airline_left_alt_sep = ''
let g:airline_right_sep = ''
let g:airline_right_alt_sep = ''  
let g:airline_symbols.branch = ''
let g:airline_symbols.readonly = ''
let g:airline_symbols.linenr = '¶'
let g:airline_theme = 'powerlineish'
" tabline
let g:airline#extensions#tabline#enabled = 1
let g:airline#extensions#tabline#show_buffers = 1 " show buffers or tabs
let g:airline#extensions#tabline#right_sep = ' '
let g:airline#extensions#tabline#right_alt_sep = ''

let g:airline#extensions#tabline#buffer_nr_show = 1
let g:airline#extensions#tabline#show_close_button = 1
let g:airline#extensions#tabline#close_symbol = 'X'
" section b
let g:airline#extensions#branch#enabled = 1
let g:airline#extensions#hunks#enabled = 1
let g:airline#extensions#hunks#non_zero_only = 0
let g:airline#extensions#hunks#hunk_symbols = ['+', '~', '-']
" section c
" section x
let g:airline#extensions#tagbar#enabled = 1
let g:airline#extensions#tagbar#flags = ''
" section z
" section warning
let g:airline#extensions#syntastic#enabled = 1
let g:airline#extensions#whitespace#enabled = 0
" quickfix
let g:airline#extensions#quickfix#quickfix_text = 'Quickfix'


" tagbar
" <F8> to open/close tagbar window
nnoremap <silent> <F8> :TagbarToggle<CR>



" open-browser.vim
" gx to search url or words
let g:netrw_nogx = 1 " disable netrw's gx mapping.
let g:openbrowser_search_engines = {'bing': 'http://www.bing.com/search?q={query}',}
let g:openbrowser_default_search = 'bing'
nmap gx <Plug>(openbrowser-smart-search)
vmap gx <Plug>(openbrowser-smart-search)



"" vim-colorschemes
"colorscheme molokai
" google colorscheeme
set background=dark
"colorscheme primary
colorscheme github 



"" a.vim
" :A switches to the header file corresponding to the current file being edited (or vise versa)
" <Leader>ih switches to file under cursor
" <Leader>is switches to the alternate file of file under cursor (e.g. on <foo.h> switches to foo.cpp)



"" signify
" :h signify
let g:signify_vcs_list = ['git']



" fugitive
" :h fugitive
" :Gstatus
" :Gcommit
" :Gmerge
" :Gpull
" :Gpush



" nerdcommenter
" <leader>cc Comment out the current line or text selected in visual mode.
" <leader>cu Uncomments the selected line(s).
" <leader>c<space> Toggles the comment state of the selected line(s). If the
" topmost selected line is commented, all selected lines are uncommented and vice versa.
" <leader>cy Same as <leader>cc except that the commented line(s) are yanked first.
let g:NERDSpaceDelims=1





" nerdtree
" <F7> open or close NERDTree
map <F7> :NERDTreeToggle<CR>


"" Conque GDB
" :ConqueGdb execfile to start gdb
" <leader>r to run
" <leader>c to continue
" <leader>s to step
" <leader>p to print variable under cursor
" <leader>b to toggle break
" <leader>f to finish
" <leader>t to backtrace
"let g:ConqueGdb_Disable = 0
let g:ConqueTerm_Color = 2          " 1: strip color after 200 lines, 2: always with color
let g:ConqueTerm_CloseOnEnd = 1     " close conque when program ends running
let g:ConqueTerm_StartMessages = 0  " display warning messages if conqueTerm is configured incorrectly
