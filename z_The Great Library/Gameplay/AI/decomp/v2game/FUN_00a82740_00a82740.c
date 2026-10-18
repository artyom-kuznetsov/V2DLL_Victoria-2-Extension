// FUN_00a82740 @ 00a82740 body=[[00a82740, 00a827af]]


void FUN_00a82740(int param_1)

{
  int unaff_ESI;
  float10 fVar1;
  int *local_8;
  
  if (-1 < param_1) {
    local_8 = (int *)0x0;
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x2c))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),&local_8);
    fVar1 = (float10)(**(code **)(*local_8 + 0x10))(local_8);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x54))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),
               (double)(fVar1 * (float10)0.25 * (float10)param_1 - (float10)0.0010000000474974513));
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}

