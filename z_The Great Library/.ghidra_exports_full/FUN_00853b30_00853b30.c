// FUN_00853b30 @ 00853b30 body=[[00853b30, 00853b88] [00853b90, 00853c7c]]


void FUN_00853b30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int *piVar6;
  int *in_ECX;
  float fVar7;
  double dVar8;
  int local_10;
  float local_c;
  int local_8;
  
  if (in_ECX[4] != 0) {
    iVar1 = *(int *)(in_ECX[4] + 0xe8);
    piVar6 = (int *)(**(code **)(*param_1 + 0x1c0))();
    if ((piVar6 != (int *)0x0) && (piVar6[2] != 0)) {
      piVar6 = (int *)*piVar6;
      local_8 = 0;
      local_c = 0.0;
      if (piVar6 != (int *)0x0) {
        do {
          iVar2 = *piVar6;
          piVar6 = (int *)piVar6[2];
          FUN_004a0e80(DAT_0125870c,&local_10);
          fVar7 = (float)((double)local_10 / 1000.0);
          auVar4._4_8_ = (ulonglong)((double)local_10 / 1000.0) >> 0x20;
          auVar4._0_4_ = fVar7;
          if (*(int *)(iVar2 + 0x110) != 0) {
            dVar8 = (double)fVar7 + 250000.0;
            auVar4._4_8_ = (ulonglong)dVar8 >> 0x20;
            auVar4._0_4_ = (float)dVar8;
          }
          if (*(int *)(iVar2 + 0xe8) != iVar1) {
            if (iVar1 == 0) {
LAB_00853c11:
              dVar8 = (double)auVar4._0_4_ + 40000.0;
            }
            else {
              for (puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xe8) + 0x14);
                  puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
                if (*(int *)*puVar3 == iVar1) goto LAB_00853c11;
              }
              dVar8 = (double)auVar4._0_4_ + 4000000.0;
            }
            auVar5._8_4_ = auVar4._8_4_;
            auVar5._0_8_ = dVar8;
            auVar4._4_8_ = auVar5._4_8_;
            auVar4._0_4_ = (float)dVar8;
          }
          if ((local_8 == 0) || (auVar4._0_4_ < local_c)) {
            local_c = auVar4._0_4_;
            local_8 = iVar2;
          }
          iVar2 = local_8;
        } while (piVar6 != (int *)0x0);
        if (local_8 != 0) {
          (**(code **)(*in_ECX + 8))();
          (**(code **)(*param_1 + 0x1c8))(iVar2);
          FUN_00826720();
        }
      }
    }
  }
  return;
}

