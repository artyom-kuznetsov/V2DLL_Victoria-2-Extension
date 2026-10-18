// FUN_00568680 @ 00568680 body=[[00568680, 005686f0] [005686f4, 0056876f]]


void FUN_00568680(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ccb3;
  local_10 = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_10;
  do {
    if (DAT_0125eadc == (int *)0x0) {
      iVar2 = FUN_00aae9af(0x9c);
      local_8 = 0;
      if (iVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_00576fe0(iVar2);
      }
      piVar1 = DAT_0125eadc;
      local_8 = 1;
      if ((piVar3 != DAT_0125eadc) && (DAT_0125eadc != (int *)0x0)) {
        FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1);
      }
      local_8 = 0xffffffff;
      DAT_0125eadc = piVar3;
    }
    if (DAT_0125eadc[1] - *DAT_0125eadc >> 2 <= iVar5) {
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x2b8) + iVar5 * 4) = 0;
    FUN_00401000(0x3f000000);
    uVar4 = FUN_00b31c00();
    *(undefined4 *)(*(int *)(param_1 + 0x2c8) + iVar5 * 4) = uVar4;
    iVar5 = iVar5 + 1;
  } while( true );
}

