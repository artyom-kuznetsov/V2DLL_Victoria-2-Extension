// FUN_007ea790 @ 007ea790 body=[[007ea790, 007ea83e] [007ea842, 007ea860] [007ea864, 007ea8bd]]


void FUN_007ea790(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
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
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_009bcbf0(in_ECX + 0x98,1);
  *(undefined4 *)(in_ECX + 0x94) = uVar2;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("projectioneffect",0x10);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("gfx/FX/project.fx",0x11);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = FUN_009be510(*(int *)(in_ECX + 0x8c) + 0x6bcfc,local_2c,local_48,
                       *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100));
  *(undefined4 *)(in_ECX + 0x90) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  iVar3 = (**(code **)(*piVar1 + 0x158))(piVar1,&DAT_00f093ac,in_ECX + 0xd4);
  if (iVar3 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (WaterVertexDecl, projection)","ERROR",0
               );
    FatalExit(1);
  }
  ExceptionList = local_10;
  return;
}

