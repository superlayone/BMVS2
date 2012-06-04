#include <iostream>
using namespace std;
#include "CPU_IncentiveDef.h"
#include "IO_IncentiveDef.h"
#include "MEM_IncentiveDef.h"
#include "Share_IncentiveDef.h"
struct Request
{
       double CPU;
       double MEM;
       double IO;
       int BelongedClass;
       /*
       remain
       */    
};
struct TaskList
{
       int BelongedClass;
       /*
       */
};
TaskList *A,*B,*C,*D;
int PA=0,PB=0,PC=0,PD=0;
double Profit=0;
double _class[4]={0.16,0.05,0.09,0.7};
int BelongedTo[1000]={1};
void Bmvs2FetchRequest(int ReqNum,Request *Req,Request *FormattedReq)
{
     /*
     int CPU=Max(Req)-Min(Req);
     int IO=Max(Req)-Min(Req);
     int MEM=Max(Req)-Min(Req);
     for(int i=0;i<ReqNum;i++)
     {
             FormattedReq[i].CPU=(FormattedReq[i].CPU-min(Req.CPU))/CPU;
             FormattedReq[i].IO=(FormattedReq[i].IO-min(Req.IO))/IO;
             FormattedReq[i].MEM=(FormattedReq[i].MEM-min(Req.MEM))/MEM;
     }
     */
}
void Classify(Request *FormattedReq)
{
     /*class训练集，data测试数据输入，并利用分类器对data数据分类，cMat2是分类后的混淆矩阵
     O2 = NaiveBayes.fit(data,class,'dist',{'kernel','normal','kernel'});
     C2 = O2.predict(data);
     cMat2 = confusionmat(class,C2);
     */
}
void Bmvs2Classify(int ReqNum,Request *FormattedReq)
{
     //Bmvs2FetchDatabase();  /*get history data*/
	 Classify(FormattedReq);
     for(int i=0;i<ReqNum;i++)
     {
             FormattedReq[i].BelongedClass=BelongedTo[i];
     }
}
void Bmvs2Sched(int ReqNum,Request *FormattedReq)
{
     int CountA=0,CountB=0,CountC=0,CountD=0;
     for(int i=0;i<ReqNum;i++)
     {
             if(FormattedReq[i].BelongedClass==1)
             {
                    A[CountA++].BelongedClass=i;
             }
             /*else if()
             {
                  
             }
             */
     }
}
void Bmvs2OptSched()
{
     /*Task A,B,C,D already exist*/
     CpuIncentive();   /*Deploy A Type Task*/
     MemIncentive();   /*Deploy B Type Task*/
     IoIncentive();    /*Deploy C Type Task*/
     ShareIncentive(); /*Deploy D Type Task*/
}
int T(int i,int j)
{
	if(1/*Task i belong to class j*/)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void Bmvs2ComputeP(int ClassNum,int TaskNum)
{
	 for(int i=0;i<ClassNum;i++)
	 {
		 for(int j=0;j<TaskNum;j++)
		 {
			 Profit+=T(i,j);
		 }
	 }
	 Profit=Profit/TaskNum;
}
double Bmvs2FetchP()
{
	double P=0.1;//test
	return P;
}
void Bmvs2ExchangeData()
{

}
void Bmvs2CMPP(double Profit)
{
	/*Fetch Profit from database*/
    int p=Bmvs2FetchP();
    /*Compare profit*/
	if(Profit>p)
	{
		/*bigger than,do exchange now*/
        Bmvs2ExchangeData();
	}
    /*else return*/
}
int main()
{
    
    return 0;
}
