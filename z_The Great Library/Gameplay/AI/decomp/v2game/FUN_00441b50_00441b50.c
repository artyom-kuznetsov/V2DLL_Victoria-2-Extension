// FUN_00441b50 @ 00441b50 body=[[00441b50, 00441cf2]]


void FUN_00441b50(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int in_ECX;
  float local_1c;
  float fStack_18;
  float local_10;
  float fStack_c;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x18) + 0x5c);
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_012588dc + 0x20d8) + *(int *)(iVar3 + 0xb4) * 4) + 0x10
                      );
    if (piVar4 != (int *)0x0) {
      cVar7 = (**(code **)(*piVar4 + 0x13c))();
      if (cVar7 != '\0') {
        fVar5 = *(float *)(iVar3 + 300);
        fVar6 = *(float *)(iVar3 + 0x120);
        local_1c = (float)*(undefined8 *)(iVar3 + 0x118);
        local_10 = (float)*(undefined8 *)(iVar3 + 0x124);
        fStack_c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x124) >> 0x20);
        fStack_18 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x118) >> 0x20);
        fVar1 = (float)piVar4[0x32];
        fVar2 = (float)piVar4[0x33];
        *param_1 = (float)piVar4[0x31] + local_1c + (local_10 - local_1c) * 0.5;
        param_1[1] = fVar1 + fStack_18 + (fStack_c - fStack_18) * 0.5;
        param_1[2] = fVar2 + fVar6 + (fVar5 - fVar6) * 0.5;
        return;
      }
    }
  }
  fVar1 = DAT_00f0abb8;
  *(undefined8 *)param_1 = DAT_00f0abb0;
  param_1[2] = fVar1;
  return;
}

