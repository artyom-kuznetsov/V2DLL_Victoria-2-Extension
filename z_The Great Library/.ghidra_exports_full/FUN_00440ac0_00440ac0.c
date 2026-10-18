// FUN_00440ac0 @ 00440ac0 body=[[00440ac0, 00440bd7]]


void FUN_00440ac0(float *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int in_ECX;
  float local_10;
  float fStack_c;
  
  if (0 < (int)(*(int *)(in_ECX + 0x98) - (int)*(int **)(in_ECX + 0x94) & 0xfffffffcU)) {
    iVar2 = *(int *)(*(int *)(**(int **)(in_ECX + 0x94) + 0xdc) + 0x5c);
    piVar3 = *(int **)(*(int *)(*(int *)(DAT_012588dc + 0x20d8) + *(int *)(iVar2 + 0xb4) * 4) + 0x10
                      );
    if (piVar3 != (int *)0x0) {
      cVar5 = (**(code **)(*piVar3 + 0x13c))();
      if (cVar5 != '\0') {
        uVar1 = *(undefined8 *)(iVar2 + 0x100 + *(int *)(in_ECX + 0xb8) * 0xc);
        fVar4 = *(float *)(iVar2 + 0x108 + *(int *)(in_ECX + 0xb8) * 0xc);
        local_10 = (float)uVar1;
        fStack_c = (float)((ulonglong)uVar1 >> 0x20);
        *param_1 = (float)piVar3[0x31] + local_10;
        param_1[1] = (float)piVar3[0x32] + fStack_c;
        param_1[2] = (float)piVar3[0x33] + fVar4;
        return;
      }
    }
  }
  fVar4 = DAT_00f0abb8;
  *(undefined8 *)param_1 = DAT_00f0abb0;
  param_1[2] = fVar4;
  return;
}

