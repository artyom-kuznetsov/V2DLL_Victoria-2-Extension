// FUN_0091eda0 @ 0091eda0 body=[[0091eda0, 0091ee20] [0091ee24, 0091ee35]]


/* WARNING: Removing unreachable block (ram,0x0091edf2) */
/* WARNING: Removing unreachable block (ram,0x0091ee1b) */

void FUN_0091eda0(void)

{
  undefined4 in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0091fa10(in_ECX,1);
  ExceptionList = local_14;
  return;
}

