// FUN_006a19e0 @ 006a19e0 body=[[006a19e0, 006a1aa5]]


void FUN_006a19e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_EDI;
  undefined1 local_c [4];
  int local_8;
  int iVar6;
  
  if (*(int *)(unaff_EDI + 0x68) != 0) {
    psVar3 = (short *)(**(code **)(*(int *)**(undefined4 **)(unaff_EDI + 0x60) + 0x14))(&local_8);
    local_8 = (int)*psVar3;
    iVar6 = 0;
    uVar5 = 0;
    if (*(char *)(unaff_EDI + 0x100) == '\0') {
      iVar6 = (**(code **)(*(int *)**(undefined4 **)(unaff_EDI + 0x60) + 0x14))(local_c);
      uVar5 = *(undefined2 *)(iVar6 + 2);
      for (puVar1 = *(undefined4 **)(unaff_EDI + 0x60); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[2]) {
        local_8 = local_8 + *(int *)(unaff_EDI + 0xec);
        psVar3 = (short *)(**(code **)(*(int *)*puVar1 + 0x14))(local_c);
        local_8 = local_8 + *psVar3;
      }
    }
    else {
      for (puVar1 = *(undefined4 **)(unaff_EDI + 0x60); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[2]) {
        iVar2 = *(int *)(unaff_EDI + 0xec);
        iVar4 = (**(code **)(*(int *)*puVar1 + 0x14))(local_c);
        iVar6 = iVar6 + iVar2 + (int)*(short *)(iVar4 + 2);
        uVar5 = (undefined2)iVar6;
      }
    }
    *(undefined2 *)((int)param_1 + 2) = uVar5;
    *(undefined2 *)param_1 = (undefined2)local_8;
    return;
  }
  *param_1 = 0;
  return;
}

