// __setlocale_get_all @ 00ab5f64 body=[[00ab5f64, 00ab60c8]]


/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2010 Release */

char * __setlocale_get_all(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char *_Memory;
  errno_t eVar3;
  int iVar4;
  LONG LVar5;
  char *_Dst;
  int unaff_ESI;
  undefined4 *local_c;
  undefined **local_8;
  
  bVar2 = true;
  _Memory = __malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    FUN_00ab5d99(_Dst,0x351,3,"LC_COLLATE",&DAT_00e37c00,*(undefined4 *)(unaff_ESI + 0x58));
    local_8 = &PTR_s_LC_COLLATE_00dd955c;
    local_c = (undefined4 *)(unaff_ESI + 0x58);
    do {
      eVar3 = _strcat_s(_Dst,0x351,";");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar1 = local_c + 4;
      iVar4 = _strcmp((char *)*local_c,(char *)*puVar1);
      if (iVar4 != 0) {
        bVar2 = false;
      }
      local_8 = local_8 + 3;
      FUN_00ab5d99(_Dst,0x351,3,*local_8,&DAT_00e37c00,*puVar1);
      local_c = puVar1;
    } while ((int)local_8 < 0xdd958c);
    if (bVar2) {
      _free(_Memory);
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
  }
  return _Dst;
}

