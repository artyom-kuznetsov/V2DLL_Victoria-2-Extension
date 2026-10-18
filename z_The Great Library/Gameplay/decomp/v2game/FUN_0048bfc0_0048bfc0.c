// FUN_0048bfc0 @ 0048bfc0  (requested 0048BFC0, first bytes: 55 8B EC 8B 4D 0C 3B 4D)


void FUN_0048bfc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *in_EAX;
  
  if (((int)param_2 <= (int)param_4) && (((int)param_2 < (int)param_4 || (param_1 < param_3)))) {
    *in_EAX = param_1;
    in_EAX[1] = param_2;
    return;
  }
  *in_EAX = param_3;
  in_EAX[1] = param_4;
  return;
}

