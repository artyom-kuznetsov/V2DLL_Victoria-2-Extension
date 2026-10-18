// FUN_008271d0 @ 008271d0 body=[[008271d0, 00827402]]


float10 FUN_008271d0(uint *param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  float local_30;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int *local_18;
  undefined4 uStack_10;
  
  piVar4 = (int *)*param_1;
  local_30 = 0.0;
LAB_008271f6:
  do {
    if ((piVar4 < (int *)*param_1) || ((int *)param_1[1] <= piVar4)) {
      return (float10)local_30;
    }
    piVar6 = (int *)*piVar4;
    piVar4 = piVar4 + 1;
    local_18 = piVar4;
    cVar3 = (**(code **)(*piVar6 + 0x3c))();
  } while (cVar3 == '\0');
  if (param_3 != '\0') goto code_r0x00827226;
  goto LAB_0082728f;
code_r0x00827226:
  uStack_10 = *(undefined4 *)(in_ECX + 0x34);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x38) * 4);
  if ((piVar6[0x31] != *(int *)(iVar5 + 0x20)) &&
     (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar6[0x31] * 4) + 0x34) != 0 ||
       ((((char)piVar6[0x30] == 'R' && (*(char *)((int)piVar6 + 0xc1) == 'E')) &&
        (*(char *)((int)piVar6 + 0xc2) == 'B')))) ||
      (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
       (*(char *)(iVar5 + 0x1e) == 'B')))))) {
LAB_0082728f:
    if ((param_4 == '\0') ||
       (uStack_10 = *(undefined4 *)(in_ECX + 0x34), *(int *)(in_ECX + 0x38) == piVar6[0x31])) {
      uStack_10 = *(undefined4 *)(in_ECX + 0x34);
      if (*(int *)(in_ECX + 0x38) == piVar6[0x31]) {
        piVar6 = piVar6 + 0x24;
      }
      else {
        piVar6 = piVar6 + 0xe;
      }
      piVar6 = (int *)*piVar6;
      piVar4 = local_18;
      while (piVar6 != (int *)0x0) {
        piVar1 = (int *)*piVar6;
        iVar5 = piVar1[0xf];
        piVar6 = (int *)piVar6[2];
        local_18 = piVar4;
        piVar4 = (int *)(**(code **)(*piVar1 + 0x30))(auStack_20,0);
        fVar2 = ((float)iVar5 / 1000.0) / ((float)*piVar4 / 1000.0);
        if (param_2 != '\0') {
          if ((piVar1[0x1d] == 0) || (*(char *)(piVar1[0x1d] + 0x164) == '\0')) {
            iVar5 = piVar1[0x10];
          }
          else {
            iVar5 = 0;
          }
          piVar4 = (int *)(**(code **)(*piVar1 + 0x34))(auStack_1c,0);
          fVar2 = (((float)iVar5 / 1000.0) / ((float)*piVar4 / 1000.0)) * fVar2;
        }
        local_30 = fVar2 + local_30;
        piVar4 = local_18;
      }
    }
  }
  goto LAB_008271f6;
}

