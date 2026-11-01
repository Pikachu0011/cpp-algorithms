//#include<stdio.h>
//#include<stdlib.h>
//#define LEN sizeof(struct stu)
//
//
//struct stu {
//	int num;
//	float score;
//	struct stu* ne;
//
//};
//
//
//struct stu* creat() {
//	struct stu* h;
//	struct stu* p1, * p2;
//	int n = 0;
//	p1 = p2 = (struct stu* )malloc(LEN);
//	scanf("%d %f", &p1->num, &p1->score);
//
//	h = NULL;
//
//	while (p1->num != 0) {
//		n = n + 1;
//		if (n == 1)h = p1;
//		else p2->ne = p1;
//		p2 = p1;
//		p1 = (struct stu*)malloc(LEN);
//		scanf("%d %f", &p1->num, &p1->score);
//	}
//	p2->ne = NULL;
//	return h;
//}
//int main() {
//	printf("请输入一个链表以0 0 结束：\n");
//	struct stu* pt;
//
//	pt = creat();
//
//	//int denum;
//	int preaddnum;
//	struct stu* addstu;
//	addstu = (struct stu*)malloc(LEN);
//	//printf("请输入需要删除的学生的学号：\n");
//	//scanf("%d", &denum);
//	//if (denum == pt->num)pt = pt->ne;
//	//while (1) {
//	//	if (pt == NULL)break;
//	//	printf("%d %f\n", pt->num, pt->score);
//	//	if ((pt->ne)->num == denum)pt->ne = (pt->ne)->ne;
//	//	pt = pt->ne;
//	//	//printf("1\n");
//	//	
//	//}
//	printf("请输入在哪位同学后添加同学的学号：\n");
//	scanf("%d", &preaddnum);
//
//	printf("请输入需要添加的同学的学号和成绩：\n");
//	scanf("%d %f", &addstu->num, &addstu->score);
//	while (1) {
//		printf("%d %f\n", pt->num, pt->score);
//		if (pt->num == preaddnum) {
//			addstu->ne = pt->ne;
//			pt->ne = addstu;
//		}
//		pt = pt->ne;
//
//		if (pt == NULL)break;
//	}
//
//	return 0;
//}