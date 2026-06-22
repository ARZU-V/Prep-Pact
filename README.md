# SDE-1 Prep — Arjit & Sreehitha

Two people. One goal: Better SDE-1 offers. This repo is how we keep each other honest.

## Why this exists

Talking about prep is easy. Showing up daily is the actual game. This repo is proof — for both of us — that the work happened. No exceptions, no "I'll log it later."

A lot of candidates prepare in bursts. They solve 50 problems in one week, disappear for two weeks, then restart from scratch. Interview preparation is not won by motivation. It is won by consistency.

This repository exists to create accountability, maintain momentum, and leave behind a visible record of effort. Every commit is evidence that progress happened.

The objective is simple:

- Become stronger engineers.
- Build interview-ready problem-solving skills.
- Develop real-world design intuition.
- Stay consistent long enough for compounding to take effect.
- Secure better SDE-1 opportunities.

## Structure

```text
.
├── a_space/        → Arjit's space (C++, Go)
│   ├── dsa/        → daily DSA log
│   ├── lld/        → LLD problems, solved in C++
│   └── project/    → practice projects (optional)
│
├── s_space/        → Sreehitha's space (Java, Spring Boot)
│   ├── dsa/        → daily DSA log
│   ├── lld/        → same LLD problems, solved in Java
│   └── project/    → practice projects (optional)
│
└── common/         → shared resources, not logs
    ├── books/      → PDFs — DSA, system design, CS fundamentals books
    └── theory/     → PDFs/notes — backend, common interview questions, CS fundamentals
```

## The Rule

**Commit every day.**

Even if it's one row in a table.

Even if the day was bad.

Even if the solution took longer than expected.

A missed log day is worse than a bad solve.

Consistency is the whole point of this repo — speed comes later.

## How each folder works

### `dsa/`

No code here.

Code lives on LeetCode, Codeforces, AtCoder, or other platforms.

The purpose of this folder is to track progress honestly.

Log:

- Date
- Problem name
- Platform
- Difficulty
- Time taken
- Key learning

The goal is to create a visible history of improvement.

---

### `lld/`

Actual code belongs here.

Each LLD problem gets its own folder.

The same problem can be solved independently in different languages.

Example:

```text
lld/
└── parking-lot/
    ├── src/
    ├── README.md
    ├── notes.md
    ├── requirements.md
    └── learnings.md
```

The code is important.

The design decisions are more important.

The reasoning behind the design is the most important.

---

### `project/`

Optional.

Used when practical engineering experience is more valuable than another coding problem.

Examples:

- Redis Clone
- HTTP Server
- Reverse Proxy
- Physics Engine
- Container Runtime
- Game Engine Components
- Streaming Service
- Database Internals

Projects build engineering intuition that pure DSA cannot.

---

### `common/`

Shared resources only.

Examples:

- Books
- Notes
- Cheatsheets
- Backend Resources
- CS Fundamentals
- Interview Resources

Store once.

Share with the other person.

Avoid duplication.

## LLD Notes & Findings

The purpose of Low-Level Design is not to memorize class diagrams.

The purpose is to learn:

- Requirement gathering
- Entity modeling
- Object-oriented design
- Design patterns
- Extensibility
- Tradeoff analysis
- Communication under pressure

For every LLD problem solved, create a `notes.md` file and document what was learned.

### Recommended Notes Template

```md
# Parking Lot

## Requirements
- Multiple floors
- Multiple vehicle types
- Ticket generation
- Spot allocation

## Core Entities
- ParkingLot
- Floor
- ParkingSpot
- Vehicle
- Ticket

## Relationships
Explain ownership and composition.

## Design Patterns Used
- Strategy Pattern
- Factory Pattern

## Tradeoffs
Why this approach?

What alternatives were considered?

## Future Extensions
- Dynamic pricing
- Reserved spots
- EV charging support

## Common Follow-ups
Questions an interviewer might ask.

## Asked By
Companies known to ask similar problems.

## Personal Learnings
What would I do differently next time?
```

### Completion Criteria

A problem is only considered complete when:

- Code compiles and works.
- Design can be explained without notes.
- Tradeoffs are understood.
- Common follow-ups can be answered.
- Learnings are documented.

If the code exists but the reasoning is missing, the problem is not finished.

## Recommended LLD Problems

These seven problems cover a large percentage of common SDE-1 LLD interviews.

### 1. Parking Lot

**Why**

- OOP
- Composition
- Inheritance
- Strategy Pattern
- Factory Pattern
- Extensibility

**Frequently Reported In**

- Amazon
- Microsoft
- Walmart
- Flipkart
- Uber
- Salesforce

### 2. Splitwise

**Why**

- Business rule modeling
- Relationships
- Service layer design
- Clean APIs

**Frequently Reported In**

- Google
- Uber
- Razorpay
- Meesho
- Atlassian

### 3. Elevator System

**Why**

- State machines
- Scheduling
- Request prioritization

**Frequently Reported In**

- Microsoft
- Amazon
- Salesforce
- Oracle

### 4. BookMyShow

**Why**

- Booking systems
- Seat allocation
- Concurrency discussions

**Frequently Reported In**

- Flipkart
- Razorpay
- PayPal
- Walmart

### 5. Notification Service

**Why**

- Interfaces
- Strategy Pattern
- Observer Pattern

**Frequently Reported In**

- Atlassian
- Salesforce
- Amazon
- Adobe

### 6. Ride Sharing (Uber/Ola)

**Why**

- Matching systems
- State transitions
- Pricing strategies

**Frequently Reported In**

- Uber
- Ola
- Microsoft
- Google

### 7. Cache / Redis Clone

**Why**

- Data structures
- Concurrency
- Systems thinking
- Performance optimization

**Frequently Reported In**

- Databricks
- Snowflake
- Cloudflare
- Akamai
- MongoDB
- Rubrik

## Important Note About Interview Questions

Interview processes change constantly.

No company guarantees a specific problem.

The company mappings above are based on commonly reported interview experiences from candidates over time.

The goal is not to memorize solutions.

The goal is to develop reusable design skills that transfer across companies.

Strong engineers recognize patterns.

Strong candidates explain tradeoffs.

Strong interviewers evaluate reasoning.

That is what this repository is intended to build.

## The Deal

No ghosting the log.

No fake streaks.

No backfilling a week of work on Sunday.

No pretending progress happened when it didn't.

Small daily reps, tracked honestly, compound into skill.

Skill compounds into confidence.

Confidence compounds into offers.

That's the strategy.

We start now.

We get it.