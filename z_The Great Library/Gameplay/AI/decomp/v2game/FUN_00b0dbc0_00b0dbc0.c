// FUN_00b0dbc0 @ 00b0dbc0 body=[[00b0dbc0, 00b0dd03]]


void FUN_00b0dbc0(int *param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  uint *puVar8;
  uint uVar9;
  uint local_8;
  
  piVar5 = param_1;
  if (param_2 == '\x01') {
    param_1[1] = 0;
    param_1[2] = 0;
    if (*param_1 != 0) {
      (*(code *)PTR__free_00f01b10)(*param_1);
      *param_1 = 0;
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x20);
  param_1 = (int *)0x0;
  if (uVar3 != 0) {
    do {
      bVar2 = *(byte *)(*(int *)(in_ECX + 0x1c) + 4 + (int)param_1 * 8);
      if (bVar2 != 0) {
        local_8 = (uint)bVar2;
        _param_2 = 0;
        do {
          uVar9 = (uint)*(ushort *)
                         (*(int *)(in_ECX + 0xc) + 6 +
                         (*(int *)(*(int *)(in_ECX + 0x1c) + (int)param_1 * 8) + _param_2) * 8);
          uVar4 = piVar5[1];
          uVar6 = 0;
          if (uVar4 != 0) {
            puVar8 = (uint *)*piVar5;
            do {
              if (*puVar8 == uVar9) {
                if (uVar6 != 0xffffffff) goto LAB_00b0dcd2;
                break;
              }
              uVar6 = uVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar6 < uVar4);
          }
          piVar5[1] = uVar4 + 1;
          if ((uint)piVar5[2] < uVar4 + 1) {
            iVar1 = uVar4 + 2;
            if (iVar1 == 0) {
              piVar5[1] = 0;
              piVar5[2] = 0;
              if (*piVar5 != 0) {
                (*(code *)PTR__free_00f01b10)(*piVar5);
                *piVar5 = 0;
              }
            }
            else {
              if (*piVar5 == 0) {
                iVar7 = (*(code *)PTR_FUN_00f01b08)(iVar1 * 4,(short)piVar5[3],4,2,0,0xffffffff);
              }
              else {
                iVar7 = (*(code *)PTR_FUN_00f01b0c)(*piVar5,iVar1 * 4);
              }
              *piVar5 = iVar7;
              piVar5[2] = iVar1;
            }
          }
          puVar8 = (uint *)(*piVar5 + -4 + piVar5[1] * 4);
          if (puVar8 != (uint *)0x0) {
            *puVar8 = uVar9;
          }
LAB_00b0dcd2:
          _param_2 = _param_2 + 1;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      param_1 = (int *)((int)param_1 + 1);
    } while (param_1 < uVar3);
  }
  return;
}

