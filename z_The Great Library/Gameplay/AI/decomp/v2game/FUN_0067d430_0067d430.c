// FUN_0067d430 @ 0067d430 body=[[0067d430, 0067d632]]


void FUN_0067d430(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  short *psVar5;
  int iVar6;
  int *in_ECX;
  int unaff_EDI;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_24;
  int iStack_20;
  undefined1 local_18 [4];
  undefined1 auStack_14 [16];
  
  if ((((*(int *)(param_1 + 8) == 0) && ((char)in_ECX[0xe] != '\0')) &&
      (*(int *)(param_1 + 0x10) == 3)) && (*(int *)(param_1 + 0x14) == 1)) {
    puStack_34 = local_18;
    puStack_38 = (undefined1 *)0x67d478;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    puStack_38 = auStack_14;
    puStack_3c = (undefined1 *)0x67d489;
    iVar3 = (**(code **)(*in_ECX + 0x118))();
    fVar1 = *(float *)(iVar3 + 4);
    puStack_3c = &stack0xffffffd8;
    puStack_40 = (undefined1 *)0x67d4a3;
    pfVar4 = (float *)(**(code **)(*in_ECX + 0x118))();
    fVar2 = *pfVar4;
    if (0 < iStack_24 - (int)fVar2) {
      puStack_40 = &stack0xffffffd4;
      psVar5 = (short *)(**(code **)(*in_ECX + 0xf4))();
      if (iStack_24 - (int)fVar2 < (int)*psVar5) {
        iVar3 = (**(code **)(*in_ECX + 0xf4))(&stack0xffffffd0);
        if ((iStack_20 - unaff_EDI < (int)*(short *)(iVar3 + 2)) && (0 < iStack_20 - unaff_EDI)) {
          puStack_38 = *(undefined1 **)(in_ECX[0x42] + 0x3a20);
          psVar5 = (short *)(**(code **)(*in_ECX + 0xf4))(&puStack_34);
          puStack_3c = (undefined1 *)((float)(int)puStack_3c / (float)(int)*psVar5);
          iVar3 = *(int *)(in_ECX[0x42] + 0x3a24);
          iVar6 = (**(code **)(*in_ECX + 0xf4))(&puStack_38);
          puStack_3c = (undefined1 *)
                       (float)((double)CONCAT44(SUB84((double)iVar3,0),(int)fVar1) /
                              (double)(int)*(short *)(iVar6 + 2));
          (**(code **)(*in_ECX + 0xf4))(&puStack_40);
          FUN_00640600();
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
      }
    }
  }
  return;
}

