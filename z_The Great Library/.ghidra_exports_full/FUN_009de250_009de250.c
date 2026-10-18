// FUN_009de250 @ 009de250 body=[[009de250, 009de328] [009de32c, 009de3bb] [009de3bf, 009de3e9] [009de3ed, 009de410] [009de414, 009de435] [009de439, 009de465]]


/* WARNING: Removing unreachable block (ram,0x009de320) */

void FUN_009de250(void)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b497b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_LAB_00e3bb58;
  in_ECX[0x53] = &PTR_FUN_00e3bcc8;
  local_8 = 5;
  FUN_004be200();
  piVar2 = (int *)in_ECX[0x7e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x7e] = 0;
  }
  FUN_009deb10();
  FUN_00409350(&DAT_00ded94d,0);
  puVar1 = in_ECX + 0x61;
  local_8 = CONCAT31(local_8._1_3_,6);
  cVar4 = FUN_00416db0();
  if ((cVar4 != '\0') || (bVar3 = true, in_ECX[0x68] == 0)) {
    bVar3 = false;
  }
  local_8 = 5;
  if (bVar3) {
    FUN_009bcce0(*(int *)(in_ECX[0x54] + 0x98) + 0x158,puVar1);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar2 = (int *)in_ECX[0xa0];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)in_ECX[0xa1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)in_ECX[0xa2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  in_ECX[0xa2] = 0;
  in_ECX[0xa0] = 0;
  in_ECX[0xa1] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xa4] = 0;
  in_ECX[0xa7] = 0;
  if (0xf < (uint)in_ECX[0x7b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x76]);
  }
  in_ECX[0x7b] = 0xf;
  in_ECX[0x7a] = 0;
  *(undefined1 *)(in_ECX + 0x76) = 0;
  if (0xf < (uint)in_ECX[0x74]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x6f]);
  }
  in_ECX[0x74] = 0xf;
  in_ECX[0x73] = 0;
  *(undefined1 *)(in_ECX + 0x6f) = 0;
  if ((uint)in_ECX[0x66] < 0x10) {
    in_ECX[0x66] = 0xf;
    in_ECX[0x65] = 0;
    *(undefined1 *)puVar1 = 0;
    if ((uint)in_ECX[0x5c] < 0x10) {
      in_ECX[0x5c] = 0xf;
      in_ECX[0x5b] = 0;
      *(undefined1 *)(in_ECX + 0x57) = 0;
      FUN_00a203f0();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x57]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

