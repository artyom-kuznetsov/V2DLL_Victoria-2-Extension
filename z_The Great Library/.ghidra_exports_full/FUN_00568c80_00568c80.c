// FUN_00568c80 @ 00568c80 body=[[00568c80, 00568d53] [00568d57, 00568dba]]


void FUN_00568c80(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5abce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00568460();
  if (DAT_0125eadc == (int *)0x0) {
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00576fe0();
    }
    local_8 = 0xffffffff;
    FUN_0057ab10();
  }
  if ((DAT_0125eadc[1] - *DAT_0125eadc & 0xfffffffcU) != 0) {
    iVar1 = 0;
    piVar3 = DAT_0125eadc;
    while( true ) {
      if (piVar3 == (int *)0x0) {
        iVar2 = FUN_00aae9af();
        local_8 = 3;
        if (iVar2 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)FUN_00576fe0();
        }
        local_8 = 4;
        if ((piVar3 != DAT_0125eadc) && (DAT_0125eadc != (int *)0x0)) {
          FUN_00576d10();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        DAT_0125eadc = piVar3;
      }
      if (piVar3[1] - *piVar3 >> 2 <= iVar1) break;
      if (0 < *(int *)(*(int *)(param_1 + 0x2b8) + iVar1 * 4)) {
        FUN_00568dc0(param_1,*(undefined4 *)(*piVar3 + iVar1 * 4));
        piVar3 = DAT_0125eadc;
      }
      iVar1 = iVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}

