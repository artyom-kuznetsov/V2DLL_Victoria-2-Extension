// FUN_009e0c90 @ 009e0c90 body=[[009e0c90, 009e0ee2]]


uint FUN_009e0c90(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int *piVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)(*(int *)(*(int *)(in_EAX + 0x168) + 0x6b9bc) / 2) + *(float *)(in_EAX + 0xc4);
  fVar7 = fVar2 - (float)param_1;
  fVar3 = ((float)(*(int *)(*(int *)(in_EAX + 0x168) + 0x6b9c0) / 2) - *(float *)(in_EAX + 200)) -
          (float)param_2;
  fVar5 = (float10)FUN_00401030(fVar3 * fVar3 + fVar7 * fVar7);
  piVar4 = (int *)FUN_0040b340((float)fVar5);
  if (extraout_ST0 < (float10)(int)*(short *)(in_EAX + 0x150)) {
    fVar2 = (float)param_1 - fVar2;
    fVar5 = (float10)FUN_0040b340(fVar2);
    fVar7 = (float)fVar5;
    fVar5 = (float10)FUN_0040b340(fVar3);
    fVar5 = (float10)FUN_005c5c80((float)fVar5,fVar7);
    fVar7 = (float)fVar5;
    fVar6 = 0.0;
    if (fVar2 < 0.0) {
      if (fVar3 < 0.0) {
        fVar7 = fVar7 + 3.1415927;
      }
      else {
        fVar7 = 3.1415927 - fVar7;
      }
    }
    else if (fVar3 <= 0.0) {
      fVar7 = (1.5707964 - fVar7) + 4.712389;
    }
    for (piVar4 = *(int **)(in_EAX + 0x158); piVar4 != *(int **)(in_EAX + 0x15c);
        piVar4 = piVar4 + 9) {
      fVar6 = (float)*piVar4 + fVar6;
      if ((fVar7 / 6.2831855) * 100.0 < fVar6) {
        *param_3 = piVar4[8];
        iVar1 = *piVar4;
        *param_4 = iVar1;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
  }
  return (uint)piVar4 & 0xffffff00;
}

