// FUN_0093e940 @ 0093e940 body=[[0093e940, 0093e94c] [0093e950, 0093e963]]


void FUN_0093e940(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 2) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
  }
  return;
}

