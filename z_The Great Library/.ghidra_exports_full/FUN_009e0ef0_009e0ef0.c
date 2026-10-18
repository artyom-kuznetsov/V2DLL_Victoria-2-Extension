// FUN_009e0ef0 @ 009e0ef0 body=[[009e0ef0, 009e11e3]]


int FUN_009e0ef0(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined8 uStack_9b0;
  int iStack_9a8;
  int local_9a4;
  undefined8 uStack_9a0;
  int iStack_998;
  int iStack_994;
  undefined8 uStack_990;
  int aiStack_988 [609];
  
  iVar5 = *(int *)(in_ECX + 0x15c) - *(int *)(in_ECX + 0x158);
  iVar4 = iVar5 * 0x38e38e39;
  iVar5 = iVar5 / 0x24;
  if (0 < iVar5) {
    local_9a4 = in_ECX;
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,1,3);
    iVar16 = 0;
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,3,1);
    piVar8 = *(int **)(param_1 + 100);
    (**(code **)(*piVar8 + 0x10c))(piVar8,0,4,3);
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,6,1);
    (**(code **)(*param_2 + 0x164))(param_2,0x42);
    fVar10 = (float)(int)*(short *)(in_ECX + 0x150);
    fVar12 = 0.0;
    iVar14 = 0;
    iVar4 = DAT_00f092fc;
    if (0 < iVar5) {
      do {
        uVar11 = 0;
        piVar13 = piVar8 + 9;
        if (0 < *piVar8) {
          piVar15 = piVar8;
          iVar3 = FUN_009b6df0();
          uStack_9b0 = CONCAT44(uVar11,uVar11);
          uStack_9a0 = CONCAT44(fVar12,fVar10);
          iVar6 = 0;
          iStack_9a8 = iVar4;
          local_9a4 = iVar3;
          iStack_998 = iVar4;
          iStack_994 = iVar3;
          if (0 < *piVar8) {
            sVar1 = *(short *)(iVar16 + 0x150);
            sVar2 = *(short *)(iVar16 + 0x152);
            piVar7 = aiStack_988 + 1;
            piVar8 = piVar15;
            do {
              iVar14 = iVar14 + 1;
              fVar12 = ((float)iVar14 * 6.2831855) / 100.0;
              fVar9 = (float10)FUN_00b35410();
              fVar10 = (float)fVar9 * (float)(int)sVar1;
              fVar9 = (float10)FUN_00414c70(fVar12);
              fVar12 = (float)(fVar9 * (float10)(int)sVar2);
              *piVar7 = iVar3;
              iVar6 = iVar6 + 1;
              *(ulonglong *)(piVar7 + -3) = CONCAT44(fVar12,fVar10);
              piVar7[-1] = iVar4;
              piVar7 = piVar7 + 4;
            } while (iVar6 < *piVar8);
          }
          (**(code **)(*param_2 + 0x14c))(param_2,6,*piVar8,&uStack_9b0,0x10);
          iVar4 = DAT_00f092fc;
        }
        iVar5 = iVar5 + -1;
        piVar8 = piVar13;
      } while (iVar5 != 0);
    }
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,2,2);
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,3,1);
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,1,4);
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,5,2);
    (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,6,1);
    iVar4 = (**(code **)(**(int **)(param_1 + 100) + 0x10c))(*(int **)(param_1 + 100),0,4,4);
  }
  return iVar4;
}

