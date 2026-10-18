// FUN_006ba840 @ 006ba840 body=[[006ba840, 006baa4a]]


void FUN_006ba840(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  float fVar6;
  undefined1 local_50 [28];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  local_14 = ExceptionList;
  iVar1 = in_ECX[0x173];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x54);
    if (in_ECX[0x266] == 5) {
      fVar6 = *(float *)(iVar2 + 0x70);
      if (fVar6 < 10.0) {
        fVar6 = fVar6 + 0.1;
      }
      ExceptionList = &local_14;
      *(float *)(iVar2 + 0x70) = fVar6;
      iVar1 = *(int *)(iVar2 + 0xb4);
      iVar4 = (**(code **)(*in_ECX + 0x38))();
      iVar2 = *(int *)(*(int *)(*(int *)(iVar4 + 0x20d8) + iVar1 * 4) + 8);
      FUN_007f18b0(iVar4 + 0x20bc,iVar1,iVar2 + 0x3c,*(undefined4 *)(iVar2 + 0x6c),
                   *(undefined4 *)(iVar2 + 0x70));
      ExceptionList = local_14;
      return;
    }
    if (in_ECX[0x266] == 6) {
      ExceptionList = &local_14;
      *(float *)(*(int *)(iVar2 + 0x340) + *(int *)(in_ECX[0x2aa] + 0x58) * 4) =
           *(float *)(*(int *)(iVar2 + 0x340) + *(int *)(in_ECX[0x2aa] + 0x58) * 4) + 0.05;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        iVar4 = FUN_004a0c40(DAT_0125870c);
        if ((iVar4 < 0) || (*(char *)(iVar4 + *(int *)(DAT_0125870c + 0x2224)) == '\0')) {
          FUN_009885d0();
          local_c = 0;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_50);
          (**(code **)(*piVar5 + 0x34))();
        }
        else {
          FUN_009885d0();
          local_c = 1;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_34);
          (**(code **)(*piVar5 + 0x38))();
        }
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      FUN_006b6e70(in_ECX,iVar1 + -8);
    }
    *(undefined1 *)(iVar2 + 0x28) = 1;
    *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
    *(undefined1 *)(iVar2 + 0x28) = 1;
    *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
  }
  ExceptionList = local_14;
  return;
}

