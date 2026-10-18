// FUN_00ad3ce0 @ 00ad3ce0 body=[[00ad3ce0, 00ad3d23]]


void FUN_00ad3ce0(void)

{
  int *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  if (in_ECX[8] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[8]);
    in_ECX[8] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad3d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX[0xd] + 0x10))();
  return;
}

