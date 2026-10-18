// FUN_0066c400 @ 0066c400 body=[[0066c400, 0066c475] [0066c479, 0066c55b] [0066c55f, 0066c56f]]


void FUN_0066c400(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint *puVar5;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x36d] != 1) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("click",5);
    local_8 = 0;
    piVar2 = (int *)FUN_009c7290();
    (**(code **)(*piVar2 + 0x60))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  iVar3 = DAT_0125870c;
  local_8 = 0xffffffff;
  in_ECX[0x36d] = 1;
  *(undefined4 *)(iVar3 + 0x2ad8) = 1;
  iVar3 = FUN_00475500();
  *(undefined1 *)(iVar3 + 0xe6) = 0;
  iVar3 = FUN_00475500();
  *(undefined4 *)(iVar3 + 0xec) = 0xffbe;
  iVar3 = FUN_00475500();
  *(undefined4 *)(iVar3 + 0xf0) = 2;
  iVar3 = (**(code **)(*in_ECX + 0x38))();
  FUN_007fca30(iVar3 + 0x20bc);
  (**(code **)(*in_ECX + 0x38))();
  FUN_00819830();
  uVar4 = (**(code **)(*in_ECX + 0x38))();
  FUN_006458d0(uVar4);
  FUN_0066c180(in_ECX,2);
  cVar1 = (**(code **)(*in_ECX + 0x144))();
  if (cVar1 != '\0') {
    iVar3 = FUN_00868080();
    if (iVar3 != 0) {
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("mapmode_political",0x11);
      puVar5 = local_48;
      local_8 = 1;
      FUN_00868080(puVar5);
      FUN_00867670(puVar5);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

