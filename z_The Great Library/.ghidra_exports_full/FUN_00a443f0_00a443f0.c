// FUN_00a443f0 @ 00a443f0 body=[[00a443f0, 00a44507] [00a44510, 00a4454c]]


void FUN_00a443f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  int local_c;
  undefined8 *local_8;
  
  piVar2 = *(int **)(unaff_ESI + 0x224);
  piVar1 = (int *)(unaff_ESI + 0x224);
  local_c = 0;
  if ((piVar2 != (int *)0x0) &&
     (uVar5 = (param_1[1] - *param_1) / 0x34, *(uint *)(unaff_ESI + 0x1680) < uVar5)) {
    *(uint *)(unaff_ESI + 0x1678) = uVar5;
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = *(int **)(*(int *)(unaff_ESI + 0x90) + 100);
    local_c = (**(code **)(*piVar2 + 0x68))
                        (piVar2,*(int *)(unaff_ESI + 0x1678) * 0xc,0x248,2,0,piVar1,0);
    *(undefined4 *)(unaff_ESI + 0x1680) = *(undefined4 *)(unaff_ESI + 0x1678);
  }
  iVar4 = (param_1[1] - *param_1) / 0x34;
  *(int *)(unaff_ESI + 0x1678) = iVar4;
  if (*piVar1 == 0) {
    piVar2 = *(int **)(*(int *)(unaff_ESI + 0x90) + 100);
    local_c = (**(code **)(*piVar2 + 0x68))(piVar2,iVar4 * 0xc,0x248,2,0,piVar1,0);
    *(undefined4 *)(unaff_ESI + 0x1680) = *(undefined4 *)(unaff_ESI + 0x1678);
  }
  if ((local_c == 0) &&
     (iVar4 = (**(code **)(*(int *)*piVar1 + 0x2c))
                        ((int *)*piVar1,0,*(int *)(unaff_ESI + 0x1678) * 0xc,&local_8,0x2000),
     iVar4 == 0)) {
    uVar5 = 0;
    if (*(int *)(unaff_ESI + 0x1678) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *param_1;
        *local_8 = *(undefined8 *)(iVar3 + iVar4);
        *(undefined4 *)(local_8 + 1) = *(undefined4 *)(iVar3 + 8 + iVar4);
        local_8 = (undefined8 *)((int)local_8 + 0xc);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x34;
      } while (uVar5 < *(uint *)(unaff_ESI + 0x1678));
    }
    (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1);
  }
  return;
}

