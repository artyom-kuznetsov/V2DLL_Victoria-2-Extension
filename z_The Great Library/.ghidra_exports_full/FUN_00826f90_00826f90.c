// FUN_00826f90 @ 00826f90 body=[[00826f90, 00826fb9] [00826fc0, 008271c8]]


float10 FUN_00826f90(undefined4 *param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  float local_2c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  piVar1 = (int *)*param_1;
  local_2c = 0.0;
joined_r0x00826fb2:
  do {
    if (piVar1 == (int *)0x0) {
      return (float10)local_2c;
    }
    piVar7 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(*piVar7 + 0x3c))();
  } while (cVar3 == '\0');
  if (param_3 != '\0') goto code_r0x00826fe4;
  goto LAB_00827051;
code_r0x00826fe4:
  uStack_10 = *(undefined4 *)(in_ECX + 0x34);
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
  if ((piVar7[0x31] != *(int *)(iVar6 + 0x20)) &&
     (((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + piVar7[0x31] * 4) + 0x34) != 0 ||
       ((((char)piVar7[0x30] == 'R' && (*(char *)((int)piVar7 + 0xc1) == 'E')) &&
        (*(char *)((int)piVar7 + 0xc2) == 'B')))) ||
      (((*(char *)(iVar6 + 0x1c) == 'R' && (*(char *)(iVar6 + 0x1d) == 'E')) &&
       (*(char *)(iVar6 + 0x1e) == 'B')))))) {
LAB_00827051:
    if ((param_4 == '\0') ||
       (uStack_10 = *(undefined4 *)(in_ECX + 0x34), *(int *)(in_ECX + 0x38) == piVar7[0x31])) {
      uStack_10 = *(undefined4 *)(in_ECX + 0x34);
      if (*(int *)(in_ECX + 0x38) == piVar7[0x31]) {
        piVar7 = piVar7 + 0x24;
      }
      else {
        piVar7 = piVar7 + 0xe;
      }
      piVar7 = (int *)*piVar7;
      while (piVar7 != (int *)0x0) {
        piVar5 = (int *)*piVar7;
        iVar6 = piVar5[0xf];
        piVar7 = (int *)piVar7[2];
        piVar4 = (int *)(**(code **)(*piVar5 + 0x30))(auStack_18,0);
        fVar2 = ((float)iVar6 / 1000.0) / ((float)*piVar4 / 1000.0);
        if (param_2 != '\0') {
          if ((piVar5[0x1d] == 0) || (*(char *)(piVar5[0x1d] + 0x164) == '\0')) {
            iVar6 = piVar5[0x10];
          }
          else {
            iVar6 = 0;
          }
          piVar5 = (int *)(**(code **)(*piVar5 + 0x34))(auStack_14,0);
          fVar2 = (((float)iVar6 / 1000.0) / ((float)*piVar5 / 1000.0)) * fVar2;
        }
        local_2c = fVar2 + local_2c;
      }
    }
  }
  goto joined_r0x00826fb2;
}

