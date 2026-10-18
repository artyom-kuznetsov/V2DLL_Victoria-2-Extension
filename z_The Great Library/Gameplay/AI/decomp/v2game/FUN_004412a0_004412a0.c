// FUN_004412a0 @ 004412a0 body=[[004412a0, 004413b5] [004413ca, 004413ec]]


void FUN_004412a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 **ppuStack_4c;
  undefined1 **local_3c;
  undefined1 *local_38;
  undefined1 **local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x24) == 0) {
    ppuStack_4c = (undefined4 **)0x0;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00ded94d);
  }
  else {
    local_38 = (undefined1 *)&ppuStack_4c;
    ExceptionList = &local_14;
    FUN_00441d00();
    FUN_00441660(in_ECX);
    local_38 = (undefined1 *)&ppuStack_4c;
    FUN_00441d00();
    FUN_004413f0(in_ECX);
    ppuStack_4c = *(undefined4 ***)(in_ECX + 0x24);
    local_38 = (undefined1 *)&ppuStack_4c;
    FUN_00441d40(&ppuStack_4c,ppuStack_4c[4]);
    FUN_004418d0();
    local_38 = (undefined1 *)&ppuStack_4c;
    FUN_00441d40(&ppuStack_4c,*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x14));
    FUN_00441990();
    ppuStack_4c = (undefined4 **)&local_38;
    cVar1 = FUN_00441e80(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x10),&local_3c);
    if (cVar1 != '\0') {
      ppuStack_4c = (undefined4 **)local_3c;
      FUN_004411c0();
    }
    ppuStack_4c = (undefined4 **)&local_38;
    cVar1 = FUN_00441e80(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x14),&local_3c);
    if (cVar1 != '\0') {
      ppuStack_4c = (undefined4 **)local_3c;
      FUN_00441210();
    }
    ppuStack_4c = local_34;
    uVar2 = FUN_005a9230();
    ppuStack_4c = (undefined4 **)0xffffffff;
    local_c = 0;
    FUN_00408ed0(uVar2,0);
    if (0xf < local_20) {
      ppuStack_4c = (undefined4 **)local_34[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

