// _Name_base @ 00ab746f body=[[00ab746f, 00ab7554]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base(class type_info const *,struct
   __type_info_node *)
   
   Library: Visual Studio 2010 Release */

char * __cdecl type_info::_Name_base(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  size_t sVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = (char *)___unDName(0,param_1 + 9,0,_malloc,_free,0x2800);
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = _strlen(_Str);
    while ((sVar1 != 0 && (sVar3 = sVar1 - 1, _Str[sVar3] == ' '))) {
      _Str[sVar3] = '\0';
      sVar1 = sVar3;
    }
    __lock(0xe);
    if ((*(int *)(param_1 + 4) == 0) && (_Memory = _malloc(8), _Memory != (undefined4 *)0x0)) {
      _Dst = _malloc(sVar1 + 1);
      *(char **)(param_1 + 4) = _Dst;
      if (_Dst == (char *)0x0) {
        _free(_Memory);
      }
      else {
        eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *_Memory = *(undefined4 *)(param_1 + 4);
        _Memory[1] = *(undefined4 *)(param_2 + 4);
        *(undefined4 **)(param_2 + 4) = _Memory;
      }
    }
    _free(_Str);
    FUN_00ab7558();
  }
  return *(char **)(param_1 + 4);
}

