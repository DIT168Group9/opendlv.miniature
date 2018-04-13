#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t AnnouncePresence::ID() {
    return 1001;
}

const std::string AnnouncePresence::ShortName() {
    return "AnnouncePresence";
}
const std::string AnnouncePresence::LongName() {
    return "AnnouncePresence";
}

AnnouncePresence& AnnouncePresence::vehicleIp(const std::string &v) noexcept {
    m_vehicleIp = v;
    return *this;
}
std::string AnnouncePresence::vehicleIp() const noexcept {
    return m_vehicleIp;
}

AnnouncePresence& AnnouncePresence::groupId(const std::string &v) noexcept {
    m_groupId = v;
    return *this;
}
std::string AnnouncePresence::groupId() const noexcept {
    return m_groupId;
}



#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t FollowRequest::ID() {
    return 1002;
}

const std::string FollowRequest::ShortName() {
    return "FollowRequest";
}
const std::string FollowRequest::LongName() {
    return "FollowRequest";
}



#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t FollowResponse::ID() {
    return 1003;
}

const std::string FollowResponse::ShortName() {
    return "FollowResponse";
}
const std::string FollowResponse::LongName() {
    return "FollowResponse";
}



#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t StopFollow::ID() {
    return 1004;
}

const std::string StopFollow::ShortName() {
    return "StopFollow";
}
const std::string StopFollow::LongName() {
    return "StopFollow";
}



#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t LeaderStatus::ID() {
    return 2001;
}

const std::string LeaderStatus::ShortName() {
    return "LeaderStatus";
}
const std::string LeaderStatus::LongName() {
    return "LeaderStatus";
}

LeaderStatus& LeaderStatus::timestamp(const uint32_t &v) noexcept {
    m_timestamp = v;
    return *this;
}
uint32_t LeaderStatus::timestamp() const noexcept {
    return m_timestamp;
}

LeaderStatus& LeaderStatus::speed(const float &v) noexcept {
    m_speed = v;
    return *this;
}
float LeaderStatus::speed() const noexcept {
    return m_speed;
}

LeaderStatus& LeaderStatus::steeringAngle(const float &v) noexcept {
    m_steeringAngle = v;
    return *this;
}
float LeaderStatus::steeringAngle() const noexcept {
    return m_steeringAngle;
}

LeaderStatus& LeaderStatus::distanceTraveled(const uint8_t &v) noexcept {
    m_distanceTraveled = v;
    return *this;
}
uint8_t LeaderStatus::distanceTraveled() const noexcept {
    return m_distanceTraveled;
}



#include <messages.hpp>

/*
 * THIS IS AN AUTO-GENERATED FILE. DO NOT MODIFY AS CHANGES MIGHT BE OVERWRITTEN!
 */


int32_t FollowerStatus::ID() {
    return 3001;
}

const std::string FollowerStatus::ShortName() {
    return "FollowerStatus";
}
const std::string FollowerStatus::LongName() {
    return "FollowerStatus";
}


