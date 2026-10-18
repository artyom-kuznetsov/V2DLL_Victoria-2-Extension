// FUN_004ee780 @ 004ee780 body=[[004ee780, 004ee8aa]]


int FUN_004ee780(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  uint uVar8;
  int local_c;
  
  iVar2 = param_2;
  iVar6 = 0;
  iVar5 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 4;
  local_c = 0;
  iVar4 = param_2;
  if (0 < iVar5) {
    do {
      if (iVar4 == 0) goto LAB_004ee89e;
      if (*(int *)(*(int *)(iVar6 + 8 + *(int *)(unaff_ESI + 0x10)) + 0x68) == param_1) {
        iVar1 = *(int *)(iVar6 + 8 + *(int *)(unaff_ESI + 0x10));
        if (*(char *)(*(int *)(iVar1 + 0x68) + 0x40) == '\0') {
          iVar7 = *(int *)(iVar1 + 0x58);
        }
        else {
          iVar7 = *(int *)(iVar1 + 0x60);
        }
        iVar7 = *(int *)(iVar1 + 0x58) - iVar7;
        if (iVar7 != 0) {
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
          piVar3 = (int *)(*(int *)(iVar6 + 8 + *(int *)(unaff_ESI + 0x10)) + 0x60);
          *piVar3 = *piVar3 + iVar7;
          piVar3 = (int *)(iVar6 + 0xc + *(int *)(unaff_ESI + 0x10));
          *piVar3 = *piVar3 + iVar7;
          param_2 = iVar4 - iVar7;
          iVar4 = *(int *)(iVar6 + 8 + *(int *)(unaff_ESI + 0x10));
          piVar3 = (int *)FUN_004c8d10();
          *piVar3 = *piVar3 + iVar7;
          *(int *)(unaff_ESI + 0x48) = *(int *)(unaff_ESI + 0x48) + iVar7;
          piVar3 = (int *)(*(int *)(unaff_ESI + 0x5c) + *(int *)(*(int *)(iVar4 + 0x68) + 0x28) * 4)
          ;
          *piVar3 = *piVar3 + iVar7;
          iVar4 = param_2;
        }
      }
      local_c = local_c + 1;
      iVar6 = iVar6 + 0x10;
    } while (local_c < iVar5);
  }
  if (0 < iVar4) {
    iVar5 = *(int *)(unaff_ESI + 8);
    if (iVar5 == 0) {
      FUN_004ee8b0(unaff_ESI,param_1,&param_2);
      iVar4 = param_2;
    }
    else {
      uVar8 = *(uint *)(iVar5 + 0x48);
      while (((*(uint *)(iVar5 + 0x48) <= uVar8 && (uVar8 < *(uint *)(iVar5 + 0x4c))) &&
             (iVar4 != 0))) {
        uVar8 = uVar8 + 4;
        FUN_004ee8b0(unaff_ESI,param_1,&param_2);
        iVar4 = param_2;
      }
    }
  }
LAB_004ee89e:
  return iVar2 - iVar4;
}

