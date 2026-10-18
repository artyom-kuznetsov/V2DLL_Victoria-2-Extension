// FUN_009bf3d0 @ 009bf3d0 body=[[009bf3d0, 009bf483] [009bf487, 009bf4a8] [009bf4ac, 009bf4f2] [009bf4f8, 009bf519] [009bf51d, 009bf544]]


void FUN_009bf3d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e14f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3a380;
  local_8 = 4;
  *(undefined4 *)(in_ECX[0x51] + 0x1bc) = 0;
  for (puVar3 = (undefined4 *)in_ECX[0x52];
      ((undefined4 *)in_ECX[0x52] <= puVar3 && (puVar3 < (undefined4 *)in_ECX[0x53]));
      puVar3 = puVar3 + 1) {
    FUN_00aaea59(*puVar3);
  }
  iVar1 = in_ECX[0x51];
  if (iVar1 != 0) {
    FUN_00ad0e50();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  FUN_004be200();
  if (in_ECX[0x68] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x68]);
  }
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  if (in_ECX[0x62] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x62]);
  }
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = (undefined4 *)in_ECX[0x57];
  if (puVar3 == (undefined4 *)0x0) {
    in_ECX[0x57] = 0;
    in_ECX[0x58] = 0;
    in_ECX[0x59] = 0;
    if (in_ECX[0x52] == 0) {
      in_ECX[0x52] = 0;
      in_ECX[0x53] = 0;
      in_ECX[0x54] = 0;
      FUN_007d9930();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x52]);
  }
  puVar2 = (undefined4 *)in_ECX[0x58];
  for (; puVar3 != puVar2; puVar3 = puVar3 + 7) {
    (**(code **)*puVar3)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x57]);
}

