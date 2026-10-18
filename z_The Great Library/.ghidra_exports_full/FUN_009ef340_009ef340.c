// FUN_009ef340 @ 009ef340 body=[[009ef340, 009ef422] [009ef426, 009ef5ae]]


/* WARNING: Removing unreachable block (ram,0x009ef419) */

void FUN_009ef340(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4ed69;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar6 = FUN_005c2ad0();
  if (iVar6 == 0) {
    ExceptionList = local_14;
    return;
  }
  iVar6 = in_ECX[0x28];
  iVar2 = *(int *)(iVar6 + 0xd4);
  iVar3 = *(int *)(iVar6 + 0xe4);
  uVar1 = *(undefined1 *)(iVar6 + 0xf0);
  FUN_009963d0();
  FUN_00409350();
  local_c = 0;
  cVar5 = FUN_00416db0();
  if ((cVar5 != '\0') || (bVar4 = true, in_ECX[0x47] == 0)) {
    bVar4 = false;
  }
  local_c = 0xffffffff;
  if (bVar4) {
    FUN_00409350();
    local_c = 1;
    FUN_00a8bc80();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00408ed0(in_ECX + 0x40,0,0xffffffff);
    local_c = 0xffffffff;
    piVar7 = (int *)FUN_009966a0(param_1);
  }
  else {
    piVar7 = (int *)FUN_00996520();
  }
  in_ECX[0x28] = (int)piVar7;
  (**(code **)(*piVar7 + 0x80))();
  *(undefined1 *)(in_ECX[0x28] + 0xf0) = uVar1;
  if (iVar2 == 0) {
    if (iVar3 == 0) goto LAB_009ef533;
    pcVar8 = *(code **)(*(int *)in_ECX[0x28] + 0x78);
  }
  else {
    pcVar8 = *(code **)(*(int *)in_ECX[0x28] + 0x7c);
  }
  (*pcVar8)();
LAB_009ef533:
  FUN_0099e960();
  (**(code **)(*(int *)in_ECX[0x28] + 0x5c))();
  (**(code **)(*(int *)in_ECX[0x28] + 0x60))();
  (**(code **)(*in_ECX + 200))();
  ExceptionList = local_14;
  return;
}

