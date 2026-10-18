// FUN_00555fa0 @ 00555fa0 body=[[00555fa0, 00555fcd] [00555fd0, 0055603c] [00556040, 0055611d]]


void FUN_00555fa0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int local_10;
  int local_8;
  
  if ((param_1 != param_2) && (piVar7 = param_1 + 1, piVar7 != param_2)) {
    local_10 = (int)piVar7 - (int)param_1;
    do {
      piVar1 = (int *)*piVar7;
      piVar8 = (int *)*param_1;
      cVar5 = (**(code **)(*piVar1 + 0x38))();
      if (cVar5 == '\0') {
        iVar9 = FUN_005cd540();
      }
      else {
        iVar9 = piVar1[0x10];
      }
      cVar5 = (**(code **)(*piVar8 + 0x38))();
      if (cVar5 == '\0') {
        iVar6 = FUN_005cd540();
      }
      else {
        iVar6 = piVar8[0x10];
      }
      piVar8 = piVar7;
      if (iVar6 < iVar9) {
        FID_conflict__memcpy(piVar7 + (1 - (local_10 >> 2)),param_1,(local_10 >> 2) * 4);
        *param_1 = (int)piVar1;
      }
      else {
        while( true ) {
          piVar2 = (int *)piVar8[-1];
          cVar5 = (**(code **)(*piVar1 + 0x38))();
          if (cVar5 == '\0') {
            piVar4 = (int *)piVar1[0xe];
            local_8 = 0;
            while (piVar4 != (int *)0x0) {
              piVar3 = (int *)*piVar4;
              piVar4 = (int *)piVar4[2];
              cVar5 = (**(code **)(*piVar3 + 0x28))();
              if ((cVar5 != '\0') && (*(char *)(piVar3[0xe] + 0x3c) == '\0')) {
                local_8 = local_8 + 1;
              }
            }
          }
          else {
            local_8 = piVar1[0x10];
          }
          cVar5 = (**(code **)(*piVar2 + 0x38))();
          if (cVar5 == '\0') {
            piVar2 = (int *)piVar2[0xe];
            iVar9 = 0;
            while (piVar2 != (int *)0x0) {
              piVar4 = (int *)*piVar2;
              piVar2 = (int *)piVar2[2];
              cVar5 = (**(code **)(*piVar4 + 0x28))();
              if ((cVar5 != '\0') && (*(char *)(piVar4[0xe] + 0x3c) == '\0')) {
                iVar9 = iVar9 + 1;
              }
            }
          }
          else {
            iVar9 = piVar2[0x10];
          }
          if (local_8 <= iVar9) break;
          *piVar8 = piVar8[-1];
          piVar8 = piVar8 + -1;
        }
        *piVar8 = (int)piVar1;
      }
      local_10 = local_10 + 4;
      piVar7 = piVar7 + 1;
    } while (piVar7 != param_2);
  }
  return;
}

