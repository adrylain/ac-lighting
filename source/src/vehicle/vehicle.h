#include <cube.h>

class CVehicle
{
public:
     vehicleent *m_pMyEnt;
     int m_iLastBotUpdate;

     // Combat variabels
     int m_iShootDelay;


     void AimToVec(const vec &o);
     float ChangeAngle(float speed, float ideal, float current);
     float GetDistance(const vec &o);
     float GetDistance(const vec &v1, const vec &v2);
     float GetDistance(entity *e);
     void ResetMoveSpeed(void) { m_pMyEnt->move = m_pMyEnt->strafe = 0; };
     void SetMoveDir(int iMoveDir, bool add);

     friend class CVehicleManager;

     virtual ~CVehicle(void);

     virtual void Spawn(void);
};

class CVehicleManager
{
     char m_szVehicleNames[150][16]; // Max 150 bot names with a length of 16 characters
     short m_sVehicleNameCount;
     char m_szVehicleTeams[20][5]; // Max 100 bot teams co a length of 5 characters
     short m_sVehicleTeamCount;

     //Un-necessary variables left over from bots.
     //bool m_bInit; 
     //bool m_bBotsShoot;
     //bool m_bIdleBots;

     int m_iFrameTime;
     int m_iPrevTime;

     friend class CVehicle;

public:
     vehicleent *m_pBotToView;

     // Construction
     CVehicleManager(void) { };

     // Destruction
     ~CVehicleManager(void);

     void Init(void);
     void RenderVehicles(void);
     vehicleent *CreateVehicle(const char *team, const char *name);
     const char *GetVehicleTeam(void);
};