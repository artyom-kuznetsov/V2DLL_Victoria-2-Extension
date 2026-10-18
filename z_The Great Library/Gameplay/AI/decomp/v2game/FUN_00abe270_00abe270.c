// FUN_00abe270 @ 00abe270 body=[[00abe270, 00abe3cf]]


int FUN_00abe270(uint param_1,int param_2,int param_3,int *param_4,char param_5,
                localeinfo_struct *param_6)

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  int iVar3;
  undefined1 *puVar4;
  char *_Dst;
  int iVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar5 = 0x16;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 1) {
      iVar5 = 0;
    }
    if (iVar5 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar4 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar4 = in_EAX + 1;
      }
      if (0 < param_2) {
        *puVar4 = puVar4[1];
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar4 = (undefined1 *)0xffffffff;
      }
      else {
        puVar4 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
      if (eVar2 == 0) {
        if (param_3 != 0) {
          *_Dst = 'E';
        }
        if (*(char *)param_4[3] != '0') {
          iVar5 = param_4[1] + -1;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
            _Dst[1] = '-';
          }
          if (99 < iVar5) {
            iVar3 = iVar5 / 100;
            iVar5 = iVar5 % 100;
            _Dst[2] = _Dst[2] + (char)iVar3;
          }
          if (9 < iVar5) {
            iVar3 = iVar5 / 10;
            iVar5 = iVar5 % 10;
            _Dst[3] = _Dst[3] + (char)iVar3;
          }
          _Dst[4] = _Dst[4] + (char)iVar5;
        }
        if (((DAT_00f209dc & 1) != 0) && (_Dst[2] == '0')) {
          FID_conflict__memcpy(_Dst + 2,_Dst + 3,3);
        }
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  *piVar1 = iVar5;
  FUN_00ab7c17();
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar5;
}

